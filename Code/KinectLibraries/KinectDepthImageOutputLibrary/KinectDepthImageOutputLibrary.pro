#-------------------------------------------------
#
# Project created by QtCreator 2018-06-17T02:49:31
#
#-------------------------------------------------

QT       -= gui

TARGET = KinectDepthImageOutputLibrary
TEMPLATE = lib
CONFIG += staticlib

SOURCES += kinectdepthimageoutputlibrary.cpp

HEADERS += kinectdepthimageoutputlibrary.h \
    ../../libfreenect/include/libfreenect.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../libfreenect/build/lib/release/ -lfreenect
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../libfreenect/build/lib/debug/ -lfreenect
else:unix: LIBS += -L$$PWD/../../libfreenect/build/lib/ -lfreenect

INCLUDEPATH += $$PWD/../../libfreenect/build
DEPENDPATH += $$PWD/../../libfreenect/build

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../libfreenect/build/lib/release/libfreenect.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../libfreenect/build/lib/debug/libfreenect.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../libfreenect/build/lib/release/freenect.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../libfreenect/build/lib/debug/freenect.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../libfreenect/build/lib/libfreenect.a
