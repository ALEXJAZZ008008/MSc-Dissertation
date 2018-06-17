QT += core
QT -= gui

CONFIG += c++11

TARGET = KinectDepthImageOutputWrapper
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    kinectdepthimageoutputwrapper.cpp

HEADERS += \
    kinectdepthimageoutputwrapper.h \
    ../KinectDepthImageOutputLibrary/kinectdepthimageoutputlibrary.h

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-KinectDepthImageOutputLibrary-Desktop_Qt_5_7_0_GCC_64bit-Debug/release/ -lKinectDepthImageOutputLibrary
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-KinectDepthImageOutputLibrary-Desktop_Qt_5_7_0_GCC_64bit-Debug/debug/ -lKinectDepthImageOutputLibrary
else:unix: LIBS += -L$$PWD/../build-KinectDepthImageOutputLibrary-Desktop_Qt_5_7_0_GCC_64bit-Debug/ -lKinectDepthImageOutputLibrary

INCLUDEPATH += $$PWD/../build-KinectDepthImageOutputLibrary-Desktop_Qt_5_7_0_GCC_64bit-Debug
DEPENDPATH += $$PWD/../build-KinectDepthImageOutputLibrary-Desktop_Qt_5_7_0_GCC_64bit-Debug

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../build-KinectDepthImageOutputLibrary-Desktop_Qt_5_7_0_GCC_64bit-Debug/release/libKinectDepthImageOutputLibrary.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../build-KinectDepthImageOutputLibrary-Desktop_Qt_5_7_0_GCC_64bit-Debug/debug/libKinectDepthImageOutputLibrary.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../build-KinectDepthImageOutputLibrary-Desktop_Qt_5_7_0_GCC_64bit-Debug/release/KinectDepthImageOutputLibrary.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../build-KinectDepthImageOutputLibrary-Desktop_Qt_5_7_0_GCC_64bit-Debug/debug/KinectDepthImageOutputLibrary.lib
else:unix: PRE_TARGETDEPS += $$PWD/../build-KinectDepthImageOutputLibrary-Desktop_Qt_5_7_0_GCC_64bit-Debug/libKinectDepthImageOutputLibrary.a
