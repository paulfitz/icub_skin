
namespace yarp iCub.skin

struct Vector {
  1: list<double> content;
} (
  yarp.name = "yarp::sig::Vector"
)

enum BodyPart {
  RIGHT_ARM = 1,
  LEFT_ARM = 2
}

enum SkinPart {
  FORE_ARM = 3,
  UPPER_ARM = 4,
  HAND = 5
}

struct TaxelPose {
  1: Vector position;
  2: Vector normal;
}

service SkinCommand {
  bool calib();

  list<double> get_touch_thresholds();

  bool set_binarization(1: bool flag);
  bool get_binarization();

  bool set_smooth_filter(1: bool flag);
  bool get_smooth_filter();

  bool set_smooth_factor(1: double factor);
  double get_smooth_factor();

  bool set_threshold(1: i32 threshold);
  i32 get_threshold();

  bool set_gain(1: double gain);
  double get_gain();

  bool set_contact_gain(1: double gain);
  double get_contact_gain();

  bool is_calibrating();

  bool set_pose(1: BodyPart body_part, 2: SkinPart skin_part, 3: i32 taxel_index, 4: TaxelPose pose);
  TaxelPose get_pose(1: BodyPart body_part, 2: SkinPart skin_part, 3: i32 taxel_index);

  bool set_poses_skin_part(1: BodyPart body_part, 2: SkinPart skin_part, 3: list<TaxelPose> poses);
  list<TaxelPose> get_poses_skin_part(1: BodyPart body_part, 2: SkinPart skin_part);

  bool set_poses_body_part(1: BodyPart body_part, 2: list<TaxelPose> poses);
  list<TaxelPose> get_poses_body_part(1: BodyPart body_part);

  bool set_poses_all(1: list<TaxelPose> poses);
  list<TaxelPose> get_poses_all();

  map<string,string> get_info();
}
