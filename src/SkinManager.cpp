// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/os/idl/WireTypes.h>

#include <iCub/SkinManager.h>
#include <iCub/TaxelPose.h>

class SkinManager_calib : public yarp::os::Portable {
public:
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) return false;
    if (!writer.writeTag("calib",1,1)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_get_touch_thresholds : public yarp::os::Portable {
public:
  std::vector<int32_t>  _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) return false;
    if (!writer.writeTag("get_touch_thresholds",1,3)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    {
      _return.clear();
      uint32_t _size0;
      yarp::os::idl::WireState _etype3;
      reader.readListBegin(_etype3, _size0);
      _return.resize(_size0);
      uint32_t _i4;
      for (_i4 = 0; _i4 < _size0; ++_i4)
      {
        if (!reader.readI32(_return[_i4])) return false;
      }
      reader.readListEnd();
    }
    return true;
  }
};

class SkinManager_set_binarization : public yarp::os::Portable {
public:
  bool flag;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) return false;
    if (!writer.writeTag("set_binarization",1,2)) return false;
    if (!writer.writeBool(flag)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_get_binarization : public yarp::os::Portable {
public:
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) return false;
    if (!writer.writeTag("get_binarization",1,2)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_set_smooth_filter : public yarp::os::Portable {
public:
  bool flag;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(4)) return false;
    if (!writer.writeTag("set_smooth_filter",1,3)) return false;
    if (!writer.writeBool(flag)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_get_smooth_filter : public yarp::os::Portable {
public:
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) return false;
    if (!writer.writeTag("get_smooth_filter",1,3)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_set_smooth_factor : public yarp::os::Portable {
public:
  double factor;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(4)) return false;
    if (!writer.writeTag("set_smooth_factor",1,3)) return false;
    if (!writer.writeDouble(factor)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_get_smooth_factor : public yarp::os::Portable {
public:
  double _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) return false;
    if (!writer.writeTag("get_smooth_factor",1,3)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readDouble(_return)) return false;
    return true;
  }
};

class SkinManager_set_threshold : public yarp::os::Portable {
public:
  int32_t threshold;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) return false;
    if (!writer.writeTag("set_threshold",1,2)) return false;
    if (!writer.writeI32(threshold)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_get_threshold : public yarp::os::Portable {
public:
  int32_t _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) return false;
    if (!writer.writeTag("get_threshold",1,2)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readI32(_return)) return false;
    return true;
  }
};

class SkinManager_set_gain : public yarp::os::Portable {
public:
  double gain;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) return false;
    if (!writer.writeTag("set_gain",1,2)) return false;
    if (!writer.writeDouble(gain)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_get_gain : public yarp::os::Portable {
public:
  double _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) return false;
    if (!writer.writeTag("get_gain",1,2)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readDouble(_return)) return false;
    return true;
  }
};

class SkinManager_set_contact_gain : public yarp::os::Portable {
public:
  double gain;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(4)) return false;
    if (!writer.writeTag("set_contact_gain",1,3)) return false;
    if (!writer.writeDouble(gain)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_get_contact_gain : public yarp::os::Portable {
public:
  double _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) return false;
    if (!writer.writeTag("get_contact_gain",1,3)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readDouble(_return)) return false;
    return true;
  }
};

class SkinManager_is_calibrating : public yarp::os::Portable {
public:
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) return false;
    if (!writer.writeTag("is_calibrating",1,2)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_set_pose : public yarp::os::Portable {
public:
  std::string body_part;
  std::string skin_part;
  int32_t taxel_index;
  TaxelPose pose;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(6)) return false;
    if (!writer.writeTag("set_pose",1,2)) return false;
    if (!writer.writeString(body_part)) return false;
    if (!writer.writeString(skin_part)) return false;
    if (!writer.writeI32(taxel_index)) return false;
    if (!writer.write(pose)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_get_pose : public yarp::os::Portable {
public:
  std::string body_part;
  std::string skin_part;
  int32_t taxel_index;
  TaxelPose _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(5)) return false;
    if (!writer.writeTag("get_pose",1,2)) return false;
    if (!writer.writeString(body_part)) return false;
    if (!writer.writeString(skin_part)) return false;
    if (!writer.writeI32(taxel_index)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.read(_return)) return false;
    return true;
  }
};

class SkinManager_set_poses : public yarp::os::Portable {
public:
  std::string body_part;
  std::string skin_part;
  std::vector<TaxelPose>  poses;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(5)) return false;
    if (!writer.writeTag("set_poses",1,2)) return false;
    if (!writer.writeString(body_part)) return false;
    if (!writer.writeString(skin_part)) return false;
    {
      if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(poses.size()))) return false;
      std::vector<TaxelPose> ::iterator _iter5;
      for (_iter5 = poses.begin(); _iter5 != poses.end(); ++_iter5)
      {
        if (!writer.write((*_iter5))) return false;
      }
      if (!writer.writeListEnd()) return false;
    }
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    if (!reader.readBool(_return)) return false;
    return true;
  }
};

class SkinManager_get_poses : public yarp::os::Portable {
public:
  std::string body_part;
  std::string skin_part;
  std::vector<TaxelPose>  _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(4)) return false;
    if (!writer.writeTag("get_poses",1,2)) return false;
    if (!writer.writeString(body_part)) return false;
    if (!writer.writeString(skin_part)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    {
      _return.clear();
      uint32_t _size6;
      yarp::os::idl::WireState _etype9;
      reader.readListBegin(_etype9, _size6);
      _return.resize(_size6);
      uint32_t _i10;
      for (_i10 = 0; _i10 < _size6; ++_i10)
      {
        if (!reader.read(_return[_i10])) return false;
      }
      reader.readListEnd();
    }
    return true;
  }
};

class SkinManager_get_info : public yarp::os::Portable {
public:
  std::map<std::string, std::string>  _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) return false;
    if (!writer.writeTag("get_info",1,2)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    {
      _return.clear();
      uint32_t _size11;
      yarp::os::idl::WireState _ktype12;
      yarp::os::idl::WireState _vtype13;
      reader.readMapBegin(_ktype12, _vtype13, _size11);
      uint32_t _i15;
      for (_i15 = 0; _i15 < _size11; ++_i15)
      {
                uint32_t _size17;
        yarp::os::idl::WireState _lst16;
        reader.readListBegin(_lst16, _size17);
        std::string _key18;
        if (!reader.readString(_key18)) return false;
        std::string& _val19 = _return[_key18];
        if (!reader.readString(_val19)) return false;
        reader.readListEnd();
      }
      reader.readMapEnd();
    }
    return true;
  }
};

bool SkinManager::calib() {
  bool _return = false;
  SkinManager_calib helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
std::vector<int32_t>  SkinManager::get_touch_thresholds() {
  std::vector<int32_t>  _return;
  SkinManager_get_touch_thresholds helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinManager::set_binarization(const bool flag) {
  bool _return = false;
  SkinManager_set_binarization helper;
  helper.flag = flag;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinManager::get_binarization() {
  bool _return = false;
  SkinManager_get_binarization helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinManager::set_smooth_filter(const bool flag) {
  bool _return = false;
  SkinManager_set_smooth_filter helper;
  helper.flag = flag;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinManager::get_smooth_filter() {
  bool _return = false;
  SkinManager_get_smooth_filter helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinManager::set_smooth_factor(const double factor) {
  bool _return = false;
  SkinManager_set_smooth_factor helper;
  helper.factor = factor;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
double SkinManager::get_smooth_factor() {
  double _return = (double)0;
  SkinManager_get_smooth_factor helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinManager::set_threshold(const int32_t threshold) {
  bool _return = false;
  SkinManager_set_threshold helper;
  helper.threshold = threshold;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
int32_t SkinManager::get_threshold() {
  int32_t _return = 0;
  SkinManager_get_threshold helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinManager::set_gain(const double gain) {
  bool _return = false;
  SkinManager_set_gain helper;
  helper.gain = gain;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
double SkinManager::get_gain() {
  double _return = (double)0;
  SkinManager_get_gain helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinManager::set_contact_gain(const double gain) {
  bool _return = false;
  SkinManager_set_contact_gain helper;
  helper.gain = gain;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
double SkinManager::get_contact_gain() {
  double _return = (double)0;
  SkinManager_get_contact_gain helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinManager::is_calibrating() {
  bool _return = false;
  SkinManager_is_calibrating helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinManager::set_pose(const std::string& body_part, const std::string& skin_part, const int32_t taxel_index, const TaxelPose& pose) {
  bool _return = false;
  SkinManager_set_pose helper;
  helper.body_part = body_part;
  helper.skin_part = skin_part;
  helper.taxel_index = taxel_index;
  helper.pose = pose;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
TaxelPose SkinManager::get_pose(const std::string& body_part, const std::string& skin_part, const int32_t taxel_index) {
  TaxelPose _return;
  SkinManager_get_pose helper;
  helper.body_part = body_part;
  helper.skin_part = skin_part;
  helper.taxel_index = taxel_index;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinManager::set_poses(const std::string& body_part, const std::string& skin_part, const std::vector<TaxelPose> & poses) {
  bool _return = false;
  SkinManager_set_poses helper;
  helper.body_part = body_part;
  helper.skin_part = skin_part;
  helper.poses = poses;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
std::vector<TaxelPose>  SkinManager::get_poses(const std::string& body_part, const std::string& skin_part) {
  std::vector<TaxelPose>  _return;
  SkinManager_get_poses helper;
  helper.body_part = body_part;
  helper.skin_part = skin_part;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
std::map<std::string, std::string>  SkinManager::get_info() {
  std::map<std::string, std::string>  _return;
  SkinManager_get_info helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}

bool SkinManager::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  if (!reader.readListHeader()) return false;
  yarp::os::ConstString tag = reader.readTag();
  while (!reader.isError()) {    // TODO: use quick lookup, this is just a test
    if (tag == "calib") {
      bool _return;
      _return = calib();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "get_touch_thresholds") {
      std::vector<int32_t>  _return;
      _return = get_touch_thresholds();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      {
        if (!writer.writeListBegin(BOTTLE_TAG_INT, static_cast<uint32_t>(_return.size()))) return false;
        std::vector<int32_t> ::iterator _iter20;
        for (_iter20 = _return.begin(); _iter20 != _return.end(); ++_iter20)
        {
          if (!writer.writeI32((*_iter20))) return false;
        }
        if (!writer.writeListEnd()) return false;
      }
      return true;
    }
    if (tag == "set_binarization") {
      bool flag;
      if (!reader.readBool(flag)) return false;
      bool _return;
      _return = set_binarization(flag);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "get_binarization") {
      bool _return;
      _return = get_binarization();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "set_smooth_filter") {
      bool flag;
      if (!reader.readBool(flag)) return false;
      bool _return;
      _return = set_smooth_filter(flag);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "get_smooth_filter") {
      bool _return;
      _return = get_smooth_filter();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "set_smooth_factor") {
      double factor;
      if (!reader.readDouble(factor)) return false;
      bool _return;
      _return = set_smooth_factor(factor);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "get_smooth_factor") {
      double _return;
      _return = get_smooth_factor();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeDouble(_return)) return false;
      return true;
    }
    if (tag == "set_threshold") {
      int32_t threshold;
      if (!reader.readI32(threshold)) return false;
      bool _return;
      _return = set_threshold(threshold);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "get_threshold") {
      int32_t _return;
      _return = get_threshold();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeI32(_return)) return false;
      return true;
    }
    if (tag == "set_gain") {
      double gain;
      if (!reader.readDouble(gain)) return false;
      bool _return;
      _return = set_gain(gain);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "get_gain") {
      double _return;
      _return = get_gain();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeDouble(_return)) return false;
      return true;
    }
    if (tag == "set_contact_gain") {
      double gain;
      if (!reader.readDouble(gain)) return false;
      bool _return;
      _return = set_contact_gain(gain);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "get_contact_gain") {
      double _return;
      _return = get_contact_gain();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeDouble(_return)) return false;
      return true;
    }
    if (tag == "is_calibrating") {
      bool _return;
      _return = is_calibrating();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "set_pose") {
      std::string body_part;
      std::string skin_part;
      int32_t taxel_index;
      TaxelPose pose;
      if (!reader.readString(body_part)) return false;
      if (!reader.readString(skin_part)) return false;
      if (!reader.readI32(taxel_index)) return false;
      if (!reader.read(pose)) return false;
      bool _return;
      _return = set_pose(body_part,skin_part,taxel_index,pose);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "get_pose") {
      std::string body_part;
      std::string skin_part;
      int32_t taxel_index;
      if (!reader.readString(body_part)) return false;
      if (!reader.readString(skin_part)) return false;
      if (!reader.readI32(taxel_index)) return false;
      TaxelPose _return;
      _return = get_pose(body_part,skin_part,taxel_index);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.write(_return)) return false;
      return true;
    }
    if (tag == "set_poses") {
      std::string body_part;
      std::string skin_part;
      std::vector<TaxelPose>  poses;
      if (!reader.readString(body_part)) return false;
      if (!reader.readString(skin_part)) return false;
      {
        poses.clear();
        uint32_t _size21;
        yarp::os::idl::WireState _etype24;
        reader.readListBegin(_etype24, _size21);
        poses.resize(_size21);
        uint32_t _i25;
        for (_i25 = 0; _i25 < _size21; ++_i25)
        {
          if (!reader.read(poses[_i25])) return false;
        }
        reader.readListEnd();
      }
      bool _return;
      _return = set_poses(body_part,skin_part,poses);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      return true;
    }
    if (tag == "get_poses") {
      std::string body_part;
      std::string skin_part;
      if (!reader.readString(body_part)) return false;
      if (!reader.readString(skin_part)) return false;
      std::vector<TaxelPose>  _return;
      _return = get_poses(body_part,skin_part);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      {
        if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(_return.size()))) return false;
        std::vector<TaxelPose> ::iterator _iter26;
        for (_iter26 = _return.begin(); _iter26 != _return.end(); ++_iter26)
        {
          if (!writer.write((*_iter26))) return false;
        }
        if (!writer.writeListEnd()) return false;
      }
      return true;
    }
    if (tag == "get_info") {
      std::map<std::string, std::string>  _return;
      _return = get_info();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      {
        if (!writer.writeMapBegin(BOTTLE_TAG_STRING, BOTTLE_TAG_STRING, static_cast<uint32_t>(_return.size()))) return false;
        std::map<std::string, std::string> ::iterator _iter27;
        for (_iter27 = _return.begin(); _iter27 != _return.end(); ++_iter27)
        {
          if (!writer.writeListBegin(0,2)) return false;
          if (!writer.writeString(_iter27->first)) return false;
          if (!writer.writeString(_iter27->second)) return false;
          if (!writer.writeListEnd()) return false;
        }
        if (!writer.writeMapEnd()) return false;
      }
      return true;
    }
    yarp::os::ConstString next_tag = reader.readTag();
    if (next_tag=="") break;
    tag = tag + "_" + next_tag;
  }
  return false;
}
