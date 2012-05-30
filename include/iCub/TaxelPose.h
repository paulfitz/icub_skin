// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_STRUCT_TaxelPose
#define YARP_THRIFT_GENERATOR_STRUCT_TaxelPose

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

#include <yarp/sig/Vector.h>
#include <iCub/SkinCommand.h>
#include <iCub/TaxelPose.h>
#include <iCub/BodyPart.h>
#include <iCub/SkinPart.h>

class TaxelPose : public yarp::os::idl::WirePortable {
public:
  yarp::sig::Vector position;
  yarp::sig::Vector normal;
  TaxelPose() {
  }
  TaxelPose(const yarp::sig::Vector& position,const yarp::sig::Vector& normal) : position(position), normal(normal) {
  }
  bool read(yarp::os::idl::WireReader& reader) {
    if (!reader.read(position)) return false;
    if (!reader.read(normal)) return false;
    return !reader.isError();
  }
  bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) return false;
    return read(reader);
  }
  bool write(yarp::os::idl::WireWriter& writer) {
    if (!writer.write(position)) return false;
    if (!writer.write(normal)) return false;
    return !writer.isError();
  }
  bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) return false;
    return write(writer);
  }
};

#endif

