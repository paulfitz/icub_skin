// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_ENUM_SkinPart
#define YARP_THRIFT_GENERATOR_ENUM_SkinPart

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

#include <yarp/sig/Vector.h>
#include <iCub/SkinCommand.h>
#include <iCub/TaxelPose.h>
#include <iCub/BodyPart.h>
#include <iCub/SkinPart.h>

enum SkinPart {
  FORE_ARM = 3,
  UPPER_ARM = 4,
  HAND = 5
};

class SkinPartVocab : public yarp::os::idl::WireVocab {
public:
  virtual int fromString(const std::string& input);
  virtual std::string toString(int input);
};


#endif
