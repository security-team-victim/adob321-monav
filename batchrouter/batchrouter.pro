TEMPLATE = app
DESTDIR = ../bin

CONFIG += link_pkgconfig

INCLUDEPATH += ..

DEFINES+=_7ZIP_ST

TARGET = batch-router
QT -= gui
QT +=network

unix {
	QMAKE_CXXFLAGS_RELEASE -= -O2
	QMAKE_CXXFLAGS_RELEASE += -O3 \
		 -Wno-unused-function
	QMAKE_CXXFLAGS_DEBUG += -Wno-unused-function
}

LIBS += -L../bin/plugins_client \
        -lcontractionhierarchiesclient_nogui \
        -lgpsgridclient_nogui \
        -ldb

SOURCES += *.cpp
HEADERS += *.h
