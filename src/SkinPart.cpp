// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

#include <yarp/sig/Vector.h>
#include <iCub/SkinCommand.h>
#include <iCub/TaxelPose.h>
#include <iCub/BodyPart.h>
#include <iCub/SkinPart.h>

int SkinPartVocab::fromString(const std::string& input) {
  // definitely needs optimizing :-)
  if (input=="FORE_ARM") return (int)FORE_ARM;
  if (input=="UPPER_ARM") return (int)UPPER_ARM;
  if (input=="HAND") return (int)HAND;
  return -1;
}
std::string SkinPartVocab::toString(int input) {
  switch((SkinPart)input) {
  case FORE_ARM:
    return "FORE_ARM";
  case UPPER_ARM:
    return "UPPER_ARM";
  case HAND:
    return "HAND";
  }
  return "";
}
