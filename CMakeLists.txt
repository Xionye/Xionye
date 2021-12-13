cmake_minimum_required(VERSION 3.16)
project(treeanalysis CXX)

# Add in CMAKE_PREFIX_PATH the installation prefix for ROOT 
list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})
# You need to add COMPONENTS according to what you want to do.
find_package(ROOT REQUIRED COMPONENTS Core RIO Net Hist Tree Proof)
# Include ROOT cmake macros
include(${ROOT_USE_FILE})

set(ARTEMIS_SHARE_DIR /home/daq/opt/artemis_src/share CACHE PATH "path to artemis share")
set(ARTEMIS_DIR /home/daq/opt/artemis CACHE PATH "path to artemis installation")
set(ARTEMIS_SOURCE_DIR /home/daq/opt/artemis_src/artemis CACHE PATH "path to artemis source")

add_subdirectory(source)