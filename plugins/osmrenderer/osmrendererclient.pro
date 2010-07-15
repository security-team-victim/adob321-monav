TEMPLATE = lib
CONFIG += plugin static
DESTDIR = ../../bin/plugins_client
unix {
	QMAKE_CXXFLAGS_RELEASE -= -O2
	QMAKE_CXXFLAGS_RELEASE += -O3 \
		 -march=native \
		 -Wno-unused-function
	QMAKE_CXXFLAGS_DEBUG += -Wno-unused-function
}
HEADERS += osmrendererclient.h \
    interfaces/irenderer.h \
    utils/coordinates.h \
    utils/config.h \
    utils/utils.h
SOURCES += osmrendererclient.cpp
QT += network