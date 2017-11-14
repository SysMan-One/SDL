TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += debug_and_release
CONFIG += static

SOURCES += \
    sdl_main.c \
    sdl_lexer.c \
    sdl_parser.c \
    ../SecurityCode/vCloud/utility_routines.c \
    sdl_parser_rtns.c

INCLUDEPATH	+=./
INCLUDEPATH	+=../SecurityCode/vCloud/
INCLUDEPATH	+=../
INCLUDEPATH	+=../SDL-bin/


#QMAKE_CFLAGS +=-I/usr/include/postgresql/
#QMAKE_CFLAGS +=-I../

LIBS		+=

CONFIG (debug, debug|release) {
	CONFIG	+= warn_off
	DEFINES	+= _DEBUG=1 __TRACE__=1

} else {
	#CONFIG	+= warn_off
	DEFINES	+= _DEBUG=1 __TRACE__=1
}


HEADERS += \
	defsdl.h
