/*
Copyright 2011  Aleksandr Dobkin adob321@gmail.com
Copyright 2010  Christian Vetter veaac.fdirct@gmail.com

This file is part of MoNav.

MoNav is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

MoNav is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with MoNav.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <db.h>
#include <stdint.h>
#include <QtCore>


#include "interfaces/irouter.h"
#include "interfaces/igpslookup.h"
#include "utils/coordinates.h"

#include "batchrouter.h"

#define LOOKUP_RADIUS 10000

Q_IMPORT_PLUGIN( contractionhierarchiesclient );
Q_IMPORT_PLUGIN( gpsgridclient );

IGPSLookup *gps_lookup;
IRouter *router;
DB *db;

void testPlugin( QObject* plugin, QString routerName, QString gpsLookupName )
{
        if ( IGPSLookup *interface = qobject_cast< IGPSLookup* >( plugin ) ) {
                qDebug() << "found plugin:" << interface->GetName();
                if ( interface->GetName() == gpsLookupName )
                        gps_lookup = interface;
        }
        if ( IRouter *interface = qobject_cast< IRouter* >( plugin ) ) {
                qDebug() << "found plugin:" << interface->GetName();
                if ( interface->GetName() == routerName )
                        router = interface;
        }
}

bool loadPlugins( QString dataDirectory )
{
        QDir dir( dataDirectory );
        QString configFilename = dir.filePath( "Module.ini" );
        if ( !QFile::exists( configFilename ) ) {
                qCritical() << "Not a valid routing module directory: Missing Module.ini";
                return false;
        }
        QSettings pluginSettings( configFilename, QSettings::IniFormat );
        int iniVersion = pluginSettings.value( "configVersion" ).toInt();
        if ( iniVersion != 2 ) {
                qCritical() << "Config File not compatible";
                return false;
        }
        QString routerName = pluginSettings.value( "router" ).toString();
        QString gpsLookupName = pluginSettings.value( "gpsLookup" ).toString();

        foreach ( QObject *plugin, QPluginLoader::staticInstances() )
                testPlugin( plugin, routerName, gpsLookupName );

        try
        {
                if ( gps_lookup == NULL ) {
                        qCritical() << "GPSLookup plugin not found:" << gpsLookupName;
                        return false;
                }
                int gpsLookupFileFormatVersion = pluginSettings.value( "gpsLookupFileFormatVersion" ).toInt();
                if ( !gps_lookup->IsCompatible( gpsLookupFileFormatVersion ) ) {
                        qCritical() << "GPS Lookup file format not compatible";
                        return false;
                }
                gps_lookup->SetInputDirectory( dataDirectory );
                if ( !gps_lookup->LoadData() ) {
                        qCritical() << "could not load GPSLookup data";
                        return false;
                }

                if ( router == NULL ) {
                        qCritical() << "router plugin not found:" << routerName;
                        return false;
                }
                int routerFileFormatVersion = pluginSettings.value( "routerFileFormatVersion" ).toInt();
                if ( !gps_lookup->IsCompatible( routerFileFormatVersion ) ) {
                        qCritical() << "Router file format not compatible";
                        return false;
                }
                router->SetInputDirectory( dataDirectory );
                if ( !router->LoadData() ) {
                        qCritical() << "could not load router data";
                        return false;
                }
        }
        catch ( ... )
        {
                qCritical() << "caught exception while loading plugins";
                return false;
        }

        qDebug() << "loaded:" << pluginSettings.value( "name" ).toString() << pluginSettings.value( "description" ).toString();

        return true;
}

uint32_t hash6432shift(const void *ptr, size_t)
{
  uint64_t key = *((int*)ptr);
  
  key = (~key) + (key << 18); // key = (key << 18) - key - 1;
  key = key ^ (key >> 31);
  key = key * 21; // key = (key + (key << 2)) + (key << 4);
  key = key ^ (key >> 11);
  key = key + (key << 6);
  key = key ^ (key >> 22);
  
  return (uint32_t) key;
}

void open_db(const char *filename)
{
    int ret;
    
    if ((ret = db_create(&db, NULL, 0)) != 0) {
        fprintf(stderr, "db_create: %s\n", db_strerror(ret));
        exit(1);
    }
    
    if ((ret = db->open(db, NULL, filename, NULL, DB_HASH, DB_CREATE, 0600)) != 0) {
        fprintf(stderr, "db->open: %s\n", db_strerror(ret));
        exit (1);
    }
}

void close_db()
{
    db->close(db, 0);
}

struct Pt
{
    int32_t from_lat, from_lng, to_lat, to_lng;
    
    Pt(double from_lat_, double from_lng_, double to_lat_, double to_lng_) : 
        from_lat( round(from_lat_*1E6) ), 
        from_lng( round(from_lng_*1E6) ),
        to_lat(   round(to_lat_*1E6)   ), 
        to_lng(   round(to_lng_*1E6)   )
    {
        
    }

};

struct Data
{
    uint32_t travel_time, distance;
    Data(int time, int dist) : travel_time(time), distance(dist) {}
    Data() {}
};

void db_put(const Pt & pt, const Data & value)
{
    DBT key, data;
    int ret;
    memset(&key, 0, sizeof(key));
    memset(&data, 0, sizeof(data));
    
    key.data = (void*)&pt;
    key.size = sizeof(pt);
    
    data.data = (void*)&value;
    data.size = sizeof(value);
    
    if ( (ret = db->put(db, NULL, &key, &data, 0)) != 0)
    {
        fprintf(stderr, "db->put error\n");
    }
}

bool db_get(const Pt & pt, Data & value)
{
    DBT key, data;
    int ret;
    memset(&key, 0, sizeof(key));
    memset(&data, 0, sizeof(data));
    
    key.data = (void*)&pt;
    key.size = sizeof(pt);
    
    ret = db->get(db, NULL, &key, &data, 0);
    
    if (ret == 0)
    {
        Data *result = (Data*)data.data;
    
        value = *result;
        
        return true;
    }
    
    else if (ret == DB_NOTFOUND)
        return false;
    
    else
        fprintf(stderr, "db->get error\n");
    
    return false;
}

int 
main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s rouding_directory cache.db\n", argv[0]);
        exit(1);
    }
    
    loadPlugins(argv[1]);
    open_db(argv[2]);
    
    
    double from_lat, from_lng, to_lat, to_lng;
    
    while ( scanf("%lf %lf %lf %lf", &from_lat, &from_lng, &to_lat, &to_lng) == 4)
    {
        //QTime time;
        //time.start();
        bool found;
        double ftime;
        double fdist;
        Pt pt(from_lat, from_lng, to_lat, to_lng);
        Data data;
        
        //printf("got %f %f %f %f -> ", from_lat, from_lng, to_lat, to_lng);
        if (db_get(pt, data))
        {
            printf("0 %d %d\n", data.travel_time, data.distance);
            fflush(stdout);
            continue;
        }
        
        UnsignedCoordinate from_coord(GPSCoordinate(from_lat, from_lng));
        UnsignedCoordinate to_coord(GPSCoordinate(to_lat, to_lng));
        
        
        IGPSLookup::Result from_pos;
        found = gps_lookup->GetNearestEdge(&from_pos, from_coord, LOOKUP_RADIUS,
                                    /* heading penalty*/ 0,
                                    /* heading */ 0);
        if (not found) {
            fprintf(stderr, "Could not find from point (%f %f)\n", from_lat, from_lng);
            printf("1\n");
            continue;
        }
        
        IGPSLookup::Result to_pos;
        found = gps_lookup->GetNearestEdge(&to_pos, to_coord, LOOKUP_RADIUS,
                                    /* heading penalty*/ 0,
                                    /* heading */ 0);
        if (not found) {
            fprintf(stderr, "Could not find to point\n");
            printf("2\n");
            continue;
        }
        
        QVector<IRouter::Node> path_nodes;
        QVector<IRouter::Edge> path_edges; 
        found = router->GetRoute(&ftime, &path_nodes, &path_edges, 
                                from_pos, to_pos);
        
        if (not found) {
            fprintf(stderr, "Could not calculate route");
            printf("3\n");
            continue;
        }
        
        fdist = 0;
        
        for (int i = 1; i < path_nodes.size(); i++)
        {
            const IRouter::Node & node1 = path_nodes.at(i-1);
            const IRouter::Node & node2 = path_nodes.at(i);
            
            fdist += 
                    (node1.coordinate.ToGPSCoordinate())
                        .Distance
                    (node2.coordinate.ToGPSCoordinate());
        }
        
        
        data.travel_time = round(ftime);
        data.distance = round(fdist);
        
        //QTime time_put;
        //time_put.start();
        db_put(pt, data);
        
        printf("0 %d %d\n", data.travel_time, data.distance);
        fflush(stdout);
        
    }
    
    
    close_db();
    fprintf(stderr, "Bye\n");
    return 0;

}

