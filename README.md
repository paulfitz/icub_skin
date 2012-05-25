icub_skin
=========

To test:

 * Make sure you have the latest version of YARP from SVN
 * mkdir build && cd build && cmake .. && make
 * ./test_skin_server
 * ./test_skin_client

If you change skin.thrift and want to regenerate IDL files, set
ALLOW_IDL_GENERATION to on with CMake.
