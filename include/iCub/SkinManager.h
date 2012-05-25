// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SkinManager
#define YARP_THRIFT_GENERATOR_SkinManager

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

#include <iCub/SkinManager.h>

class SkinManager : public yarp::os::Wire {
public:
  SkinManager() { yarp().setOwner(*this); }
  virtual bool calib();
  virtual std::vector<int32_t>  get_touch_thresholds();
  virtual bool set_binarization(const bool flag);
  virtual bool get_binarization();
  virtual bool set_smooth_filter(const bool flag);
  virtual bool get_smooth_filter();
  virtual bool set_smooth_factor(const double factor);
  virtual double get_smooth_factor();
  virtual bool set_threshold(const int32_t threshold);
  virtual int32_t get_threshold();
  virtual std::map<std::string, std::string>  get_info();
  virtual bool read(yarp::os::ConnectionReader& connection);
};

#endif

