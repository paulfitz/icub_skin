// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SkinCommand
#define YARP_THRIFT_GENERATOR_SkinCommand

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

#include <yarp/sig/Vector.h>
#include <iCub/SkinCommand.h>
#include <iCub/TaxelPose.h>
#include <iCub/BodyPart.h>
#include <iCub/SkinPart.h>

namespace iCub {
  namespace skin {
    class SkinCommand;
  }
}


class iCub::skin::SkinCommand : public yarp::os::Wire {
public:
  SkinCommand() { yarp().setOwner(*this); }
  virtual bool calib();
  virtual std::vector<double>  get_touch_thresholds();
  virtual bool set_binarization(const bool flag);
  virtual bool get_binarization();
  virtual bool set_smooth_filter(const bool flag);
  virtual bool get_smooth_filter();
  virtual bool set_smooth_factor(const double factor);
  virtual double get_smooth_factor();
  virtual bool set_threshold(const int32_t threshold);
  virtual int32_t get_threshold();
  virtual bool set_gain(const double gain);
  virtual double get_gain();
  virtual bool set_contact_gain(const double gain);
  virtual double get_contact_gain();
  virtual bool is_calibrating();
  virtual bool set_pose(const BodyPart body_part, const SkinPart skin_part, const int32_t taxel_index, const TaxelPose& pose);
  virtual TaxelPose get_pose(const BodyPart body_part, const SkinPart skin_part, const int32_t taxel_index);
  virtual bool set_poses_skin_part(const BodyPart body_part, const SkinPart skin_part, const std::vector<TaxelPose> & poses);
  virtual std::vector<TaxelPose>  get_poses_skin_part(const BodyPart body_part, const SkinPart skin_part);
  virtual bool set_poses_body_part(const BodyPart body_part, const std::vector<TaxelPose> & poses);
  virtual std::vector<TaxelPose>  get_poses_body_part(const BodyPart body_part);
  virtual bool set_poses_all(const std::vector<TaxelPose> & poses);
  virtual std::vector<TaxelPose>  get_poses_all();
  virtual std::map<std::string, std::string>  get_info();
  virtual bool read(yarp::os::ConnectionReader& connection);
};

#endif

