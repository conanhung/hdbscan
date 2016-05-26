cmake_minimum_required (VERSION 2.6)
project (hdbscan CXX)
set(CMAKE_BUILD_TYPE Release)
# ---[ Includes
set(HDBSCAN_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
include_directories(${HDBSCAN_INCLUDE_DIR})

set(HDBSCAN_SRC_DIR ${PROJECT_SOURCE_DIR}/src)

# get all *.cpp files recursively
file(GLOB_RECURSE SRC_FILES ${HDBSCAN_SRC_DIR}/*.cpp)

# ---[ HDBSCAN version
set(HDBSCAN_TARGET_VERSION "1.0.0")
set(HDBSCAN_TARGET_SOVERSION "1.0.0")
add_definitions(-DHDBSCAN_VERSION=${HDBSCAN_TARGET_VERSION})

# -- project options
set( CMAKE_CXX_FLAGS "-D__cplusplus=201103L -O0 -g3 -Wall -fmessage-length=0 -std=c++11")

add_library(hdbscan++ SHARED ${SRC_FILES})
 