// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_STRUCT_TaxelPose
#define YARP_THRIFT_GENERATOR_STRUCT_TaxelPose

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

#include <iCub/SkinManager.h>
#include <iCub/TaxelPose.h>

class TaxelPose : public yarp::os::idl::WirePortable {
public:
  double val;
  TaxelPose() : val(0) {
  }
  TaxelPose(const double val) : val(val) {
  }
  bool read(yarp::os::idl::WireReader& reader) {
    if (!reader.readDouble(val)) return false;
    return !reader.isError();
  }
  bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(1)) return false;
    return read(reader);
  }
  bool write(yarp::os::idl::WireWriter& writer) {
    if (!writer.writeDouble(val)) return false;
    return !writer.isError();
  }
  bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) return false;
    return write(writer);
  }
};

#endif

