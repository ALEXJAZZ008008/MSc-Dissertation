TEMPLATE = subdirs

SUBDIRS += \
    KinectDepthImageOutputWrapper \
    KinectDepthImageOutputLibrary

KinectDepthImageOutputWrapper.depends = KinectDepthImageOutputLibrary
