// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

#include <yarp/sig/Vector.h>
#include <iCub/SkinCommand.h>
#include <iCub/TaxelPose.h>
#include <iCub/BodyPart.h>
#include <iCub/SkinPart.h>

int BodyPartVocab::fromString(const std::string& input) {
  // definitely needs optimizing :-)
  if (input=="RIGHT_ARM") return (int)RIGHT_ARM;
  if (input=="LEFT_ARM") return (int)LEFT_ARM;
  return -1;
}
std::string BodyPartVocab::toString(int input) {
  switch((BodyPart)input) {
  case RIGHT_ARM:
    return "RIGHT_ARM";
  case LEFT_ARM:
    return "LEFT_ARM";
  }
  return "";
}
