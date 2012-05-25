cmake_minimum_required(VERSION 2.8)
find_package(YARP REQUIRED)
include_directories(${YARP_INCLUDE_DIRS})

include(${YARP_MODULE_PATH}/YarpIDL.cmake)

yarp_idl(skin.thrift 
  src/SkinManager.cpp 
  include/iCub/SkinManager.h AS iCub/SkinManager.h
  src/TaxelPose.cpp 
  include/iCub/TaxelPose.h AS iCub/TaxelPose.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(skin_manager src/SkinManager.cpp include/iCub/SkinManager.h
  include/iCub/TaxelPose.h src/TaxelPose.cpp include/iCub/TaxelPose.h)

add_executable(test_skin_server src/test_skin_server.cpp)
add_executable(test_skin_client src/test_skin_client.cpp)

target_link_libraries(test_skin_server skin_manager ${YARP_LIBRARIES})
target_link_libraries(test_skin_client skin_manager ${YARP_LIBRARIES})

