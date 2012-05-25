
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
  map<string,string> get_info();
}
