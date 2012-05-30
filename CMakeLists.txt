cmake_minimum_required(VERSION 2.8)
find_package(YARP REQUIRED)
include_directories(${YARP_INCLUDE_DIRS})

include(${YARP_MODULE_PATH}/YarpIDL.cmake)

yarp_idl(skin.thrift 
  src/SkinCommand.cpp 
  src/TaxelPose.cpp 
  src/BodyPart.cpp
  src/SkinPart.cpp
  include/iCub/SkinCommand.h AS iCub/SkinCommand.h
  include/iCub/TaxelPose.h AS iCub/TaxelPose.h
  include/iCub/BodyPart.h AS iCub/BodyPart.h
  include/iCub/SkinPart.h AS iCub/SkinPart.h
  INCLUDE yarp/sig/Vector.h
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(skin_command src/SkinCommand.cpp include/iCub/SkinCommand.h
  include/iCub/TaxelPose.h src/TaxelPose.cpp include/iCub/TaxelPose.h
  src/BodyPart.cpp include/iCub/BodyPart.h
  src/SkinPart.cpp include/iCub/SkinPart.h
)

add_executable(test_skin_server src/test_skin_server.cpp)
add_executable(test_skin_client src/test_skin_client.cpp)

target_link_libraries(test_skin_server skin_command ${YARP_LIBRARIES})
target_link_libraries(test_skin_client skin_command ${YARP_LIBRARIES})

