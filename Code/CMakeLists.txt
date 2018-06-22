#############################  Superbuild Project  #############################
cmake_minimum_required(VERSION 3.3 FATAL_ERROR) 

project(KinectSuite LANGUAGES C CXX)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

############################  Options: Build What?  ############################
option(ENABLE_KinectLibraries "Enables the Kinect Libraries" OFF)

############################  Options: Build How?  #############################
include(commons)
option_with_print(BUILD_SHARED_LIBS "Build internally built libraries as shared, not static" OFF)
option_with_default(CMAKE_BUILD_TYPE "Build type (Release or Debug)" Debug)
option_with_default(CMAKE_INSTALL_LIBDIR "Directory to which libraries installed" lib)

# This might stop you from building inside the source code you windows maggot. 
include(automake_safeguards)

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    set(CMAKE_INSTALL_PREFIX "/opt/KinectSuite" CACHE PATH "Install path" FORCE)
endif()
message(STATUS "KinectSuite install: ${CMAKE_INSTALL_PREFIX}")

add_subdirectory(external/common)

include(ExternalProject)
