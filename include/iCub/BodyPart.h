// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_ENUM_BodyPart
#define YARP_THRIFT_GENERATOR_ENUM_BodyPart

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

#include <yarp/sig/Vector.h>
#include <iCub/SkinCommand.h>
#include <iCub/TaxelPose.h>
#include <iCub/BodyPart.h>
#include <iCub/SkinPart.h>

enum BodyPart {
  RIGHT_ARM = 1,
  LEFT_ARM = 2
};

class BodyPartVocab : public yarp::os::idl::WireVocab {
public:
  virtual int fromString(const std::string& input);
  virtual std::string toString(int input);
};


#endif
