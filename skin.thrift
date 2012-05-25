
// Not sure what a pose is, so leaving a placeholder structure.
// If just a single number, this could be simplified.
struct TaxelPose {
  1: double val;
}

service SkinManager {
  bool calib();

  list<i32> get_touch_thresholds();

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

  bool set_pose(1: string body_part, 2: string skin_part, 3: i32 taxel_index, 4: TaxelPose pose);
  TaxelPose get_pose(1: string body_part, 2: string skin_part, 3: i32 taxel_index);

  bool set_poses(1: string body_part, 2: string skin_part, 3: list<TaxelPose> poses);
  list<TaxelPose> get_poses(1: string body_part, 2: string skin_part);

  map<string,string> get_info();
}
