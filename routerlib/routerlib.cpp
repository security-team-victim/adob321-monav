#include <QtCore>

#include "interfaces/irouter.h"
#include "interfaces/igpslookup.h"
#include "utils/coordinates.h"

#include "routerlib.h"

#define LOOKUP_RADIUS 10000

Q_IMPORT_PLUGIN( contractionhierarchiesclient );
Q_IMPORT_PLUGIN( gpsgridclient );

static IGPSLookup *gps_lookup;
static IRouter *router;

static
void testPlugin( QObject* plugin, QString routerName, QString gpsLookupName )
{
        if ( IGPSLookup *interface = qobject_cast< IGPSLookup* >( plugin ) ) {
                qDebug() << "INFO: found plugin:" << interface->GetName();
                if ( interface->GetName() == gpsLookupName )
                        gps_lookup = interface;
        }
        if ( IRouter *interface = qobject_cast< IRouter* >( plugin ) ) {
                qDebug() << "INFO: found plugin:" << interface->GetName();
                if ( interface->GetName() == routerName )
                        router = interface;
        }
}

static
bool loadPlugins( QString dataDirectory )
{
        QDir dir( dataDirectory );
        QString configFilename = dir.filePath( "Module.ini" );
        if ( !QFile::exists( configFilename ) ) {
                qCritical() << "FATAL: Not a valid routing module directory: Missing Module.ini";
                return false;
        }
        QSettings pluginSettings( configFilename, QSettings::IniFormat );
        int iniVersion = pluginSettings.value( "configVersion" ).toInt();
        if ( iniVersion != 2 ) {
                qCritical() << "FATAL: Config File not compatible";
                return false;
        }
        QString routerName = pluginSettings.value( "router" ).toString();
        QString gpsLookupName = pluginSettings.value( "gpsLookup" ).toString();

        foreach ( QObject *plugin, QPluginLoader::staticInstances() )
                testPlugin( plugin, routerName, gpsLookupName );

        try
        {
                if ( gps_lookup == NULL ) {
                        qCritical() << "FATAL: GPSLookup plugin not found:" << gpsLookupName;
                        return false;
                }
                int gpsLookupFileFormatVersion = pluginSettings.value( "gpsLookupFileFormatVersion" ).toInt();
                if ( !gps_lookup->IsCompatible( gpsLookupFileFormatVersion ) ) {
                        qCritical() << "FATAL: GPS Lookup file format not compatible";
                        return false;
                }
                gps_lookup->SetInputDirectory( dataDirectory );
                if ( !gps_lookup->LoadData() ) {
                        qCritical() << "FATAL: Could not load GPSLookup data";
                        return false;
                }

                if ( router == NULL ) {
                        qCritical() << "FATAL: Router plugin not found:" << routerName;
                        return false;
                }
                int routerFileFormatVersion = pluginSettings.value( "routerFileFormatVersion" ).toInt();
                if ( !gps_lookup->IsCompatible( routerFileFormatVersion ) ) {
                        qCritical() << "FATAL: Router file format not compatible";
                        return false;
                }
                router->SetInputDirectory( dataDirectory );
                if ( !router->LoadData() ) {
                        qCritical() << "FATAL: Could not load router data";
                        return false;
                }
        }
        catch ( ... )
        {
                qCritical() << "FATAL: Caught exception while loading plugins";
                return false;
        }

        qDebug() << "INFO: loaded:" << pluginSettings.value( "name" ).toString() << pluginSettings.value( "description" ).toString();

        return true;
}

extern "C" 
int init(const char *arg)
{
    if (not loadPlugins(arg))
        return 1;
    
    return 0;
}

extern "C"
int route(double from_lat, double from_lng, double to_lat, double to_lng,
              double *time, double *distance)
{
//     fprintf(stderr, "start routing (%f %f) -> (%f %f)\n",
//         from_lat, from_lng, to_lat, to_lng);
    
    bool found;
    double ftime;
    double fdist = 0;
    
    UnsignedCoordinate from_coord(GPSCoordinate(from_lat, from_lng));
    UnsignedCoordinate to_coord(GPSCoordinate(to_lat, to_lng));
    
    IGPSLookup::Result from_pos;
    found = gps_lookup->GetNearestEdge(&from_pos, from_coord, LOOKUP_RADIUS,
                                /* heading penalty*/ 0,
                                /* heading */ 0);
    if (not found) {
        fprintf(stderr, "WARN: Could not find from point (%f %f)\n", from_lat, from_lng);
        
        return ROUTING_FROM_NOT_FOUND;
    }
    
    IGPSLookup::Result to_pos;
    found = gps_lookup->GetNearestEdge(&to_pos, to_coord, LOOKUP_RADIUS,
                                /* heading penalty*/ 0,
                                /* heading */ 0);
    if (not found) {
        fprintf(stderr, "WARN: Could not find to point (%f %f)\n", from_lat, from_lng);
        
        return ROUTING_TO_NOT_FOUND;
    }
    
    QVector<IRouter::Node> path_nodes;
    QVector<IRouter::Edge> path_edges; 
    found = router->GetRoute(&ftime, &path_nodes, &path_edges, 
                            from_pos, to_pos);
    
    if (not found) {
        fprintf(stderr, "WARN: Could not calculate route (%f %f) -> (%f %f)\n", 
                from_lat, from_lng, to_lat, to_lng);
        
        return ROUTING_PATH_NOT_FOUND;
    }
    
    for (int i = 1; i < path_nodes.size(); i++)
    {
        const IRouter::Node & node1 = path_nodes.at(i-1);
        const IRouter::Node & node2 = path_nodes.at(i);
        
        fdist += (node1.coordinate.ToGPSCoordinate())
                    .Distance
                 (node2.coordinate.ToGPSCoordinate());
    }
    
    
    *time = ftime;
    *distance = fdist;
    
    return ROUTING_OK;
}