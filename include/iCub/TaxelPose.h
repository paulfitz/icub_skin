// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_STRUCT_TaxelPose
#define YARP_THRIFT_GENERATOR_STRUCT_TaxelPose

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

#include <iCub/SkinCommand.h>
#include <iCub/TaxelPose.h>

class TaxelPose : public yarp::os::idl::WirePortable {
public:
  std::vector<double>  pose;
  TaxelPose() {
  }
  TaxelPose(const std::vector<double> & pose) : pose(pose) {
  }
  bool read(yarp::os::idl::WireReader& reader) {
    {
      pose.clear();
      uint32_t _size0;
      yarp::os::idl::WireState _etype3;
      reader.readListBegin(_etype3, _size0);
      pose.resize(_size0);
      uint32_t _i4;
      for (_i4 = 0; _i4 < _size0; ++_i4)
      {
        if (!reader.readDouble(pose[_i4])) return false;
      }
      reader.readListEnd();
    }
    return !reader.isError();
  }
  bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(1)) return false;
    return read(reader);
  }
  bool write(yarp::os::idl::WireWriter& writer) {
    {
      if (!writer.writeListBegin(BOTTLE_TAG_DOUBLE, static_cast<uint32_t>(pose.size()))) return false;
      std::vector<double> ::iterator _iter5;
      for (_iter5 = pose.begin(); _iter5 != pose.end(); ++_iter5)
      {
        if (!writer.writeDouble((*_iter5))) return false;
      }
      if (!writer.writeListEnd()) return false;
    }
    return !writer.isError();
  }
  bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) return false;
    return write(writer);
  }
};

#endif

