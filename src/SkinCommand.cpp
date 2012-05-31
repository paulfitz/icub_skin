// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/os/idl/WireTypes.h>

#include <yarp/sig/Vector.h>
#include <iCub/SkinCommand.h>
#include <iCub/TaxelPose.h>
#include <iCub/BodyPart.h>
#include <iCub/SkinPart.h>

namespace iCub { namespace skin {


class SkinCommand_calib : public yarp::os::Portable {
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

class SkinCommand_get_touch_thresholds : public yarp::os::Portable {
public:
  std::vector<double>  _return;
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
        if (!reader.readDouble(_return[_i4])) return false;
      }
      reader.readListEnd();
    }
    return true;
  }
};

class SkinCommand_set_binarization : public yarp::os::Portable {
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

class SkinCommand_get_binarization : public yarp::os::Portable {
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

class SkinCommand_set_smooth_filter : public yarp::os::Portable {
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

class SkinCommand_get_smooth_filter : public yarp::os::Portable {
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

class SkinCommand_set_smooth_factor : public yarp::os::Portable {
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

class SkinCommand_get_smooth_factor : public yarp::os::Portable {
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

class SkinCommand_set_threshold : public yarp::os::Portable {
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

class SkinCommand_get_threshold : public yarp::os::Portable {
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

class SkinCommand_set_gain : public yarp::os::Portable {
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

class SkinCommand_get_gain : public yarp::os::Portable {
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

class SkinCommand_set_contact_gain : public yarp::os::Portable {
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

class SkinCommand_get_contact_gain : public yarp::os::Portable {
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

class SkinCommand_is_calibrating : public yarp::os::Portable {
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

class SkinCommand_set_pose : public yarp::os::Portable {
public:
  BodyPart body_part;
  SkinPart skin_part;
  int32_t taxel_index;
  TaxelPose pose;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(7)) return false;
    if (!writer.writeTag("set_pose",1,2)) return false;
    if (!writer.writeI32((int32_t)body_part)) return false;
    if (!writer.writeI32((int32_t)skin_part)) return false;
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

class SkinCommand_get_pose : public yarp::os::Portable {
public:
  BodyPart body_part;
  SkinPart skin_part;
  int32_t taxel_index;
  TaxelPose _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(5)) return false;
    if (!writer.writeTag("get_pose",1,2)) return false;
    if (!writer.writeI32((int32_t)body_part)) return false;
    if (!writer.writeI32((int32_t)skin_part)) return false;
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

class SkinCommand_set_poses_skin_part : public yarp::os::Portable {
public:
  BodyPart body_part;
  SkinPart skin_part;
  std::vector<TaxelPose>  poses;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(7)) return false;
    if (!writer.writeTag("set_poses_skin_part",1,4)) return false;
    if (!writer.writeI32((int32_t)body_part)) return false;
    if (!writer.writeI32((int32_t)skin_part)) return false;
    {
      if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(poses.size()))) return false;
      std::vector<TaxelPose> ::iterator _iter5;
      for (_iter5 = poses.begin(); _iter5 != poses.end(); ++_iter5)
      {
        if (!writer.writeNested((*_iter5))) return false;
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

class SkinCommand_get_poses_skin_part : public yarp::os::Portable {
public:
  BodyPart body_part;
  SkinPart skin_part;
  std::vector<TaxelPose>  _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(6)) return false;
    if (!writer.writeTag("get_poses_skin_part",1,4)) return false;
    if (!writer.writeI32((int32_t)body_part)) return false;
    if (!writer.writeI32((int32_t)skin_part)) return false;
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
        if (!reader.readNested(_return[_i10])) return false;
      }
      reader.readListEnd();
    }
    return true;
  }
};

class SkinCommand_set_poses_body_part : public yarp::os::Portable {
public:
  BodyPart body_part;
  std::vector<TaxelPose>  poses;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(6)) return false;
    if (!writer.writeTag("set_poses_body_part",1,4)) return false;
    if (!writer.writeI32((int32_t)body_part)) return false;
    {
      if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(poses.size()))) return false;
      std::vector<TaxelPose> ::iterator _iter11;
      for (_iter11 = poses.begin(); _iter11 != poses.end(); ++_iter11)
      {
        if (!writer.writeNested((*_iter11))) return false;
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

class SkinCommand_get_poses_body_part : public yarp::os::Portable {
public:
  BodyPart body_part;
  std::vector<TaxelPose>  _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(5)) return false;
    if (!writer.writeTag("get_poses_body_part",1,4)) return false;
    if (!writer.writeI32((int32_t)body_part)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    {
      _return.clear();
      uint32_t _size12;
      yarp::os::idl::WireState _etype15;
      reader.readListBegin(_etype15, _size12);
      _return.resize(_size12);
      uint32_t _i16;
      for (_i16 = 0; _i16 < _size12; ++_i16)
      {
        if (!reader.readNested(_return[_i16])) return false;
      }
      reader.readListEnd();
    }
    return true;
  }
};

class SkinCommand_set_poses_all : public yarp::os::Portable {
public:
  std::vector<TaxelPose>  poses;
  bool _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(4)) return false;
    if (!writer.writeTag("set_poses_all",1,3)) return false;
    {
      if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(poses.size()))) return false;
      std::vector<TaxelPose> ::iterator _iter17;
      for (_iter17 = poses.begin(); _iter17 != poses.end(); ++_iter17)
      {
        if (!writer.writeNested((*_iter17))) return false;
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

class SkinCommand_get_poses_all : public yarp::os::Portable {
public:
  std::vector<TaxelPose>  _return;
  virtual bool write(yarp::os::ConnectionWriter& connection) {
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) return false;
    if (!writer.writeTag("get_poses_all",1,3)) return false;
    return true;
  }
  virtual bool read(yarp::os::ConnectionReader& connection) {
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) return false;
    {
      _return.clear();
      uint32_t _size18;
      yarp::os::idl::WireState _etype21;
      reader.readListBegin(_etype21, _size18);
      _return.resize(_size18);
      uint32_t _i22;
      for (_i22 = 0; _i22 < _size18; ++_i22)
      {
        if (!reader.readNested(_return[_i22])) return false;
      }
      reader.readListEnd();
    }
    return true;
  }
};

class SkinCommand_get_info : public yarp::os::Portable {
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
      uint32_t _size23;
      yarp::os::idl::WireState _ktype24;
      yarp::os::idl::WireState _vtype25;
      reader.readMapBegin(_ktype24, _vtype25, _size23);
      uint32_t _i27;
      for (_i27 = 0; _i27 < _size23; ++_i27)
      {
                uint32_t _size29;
        yarp::os::idl::WireState _lst28;
        reader.readListBegin(_lst28, _size29);
        std::string _key30;
        if (!reader.readString(_key30)) return false;
        std::string& _val31 = _return[_key30];
        if (!reader.readString(_val31)) return false;
        reader.readListEnd();
      }
      reader.readMapEnd();
    }
    return true;
  }
};

bool SkinCommand::calib() {
  bool _return = false;
  SkinCommand_calib helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
std::vector<double>  SkinCommand::get_touch_thresholds() {
  std::vector<double>  _return;
  SkinCommand_get_touch_thresholds helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::set_binarization(const bool flag) {
  bool _return = false;
  SkinCommand_set_binarization helper;
  helper.flag = flag;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::get_binarization() {
  bool _return = false;
  SkinCommand_get_binarization helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::set_smooth_filter(const bool flag) {
  bool _return = false;
  SkinCommand_set_smooth_filter helper;
  helper.flag = flag;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::get_smooth_filter() {
  bool _return = false;
  SkinCommand_get_smooth_filter helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::set_smooth_factor(const double factor) {
  bool _return = false;
  SkinCommand_set_smooth_factor helper;
  helper.factor = factor;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
double SkinCommand::get_smooth_factor() {
  double _return = (double)0;
  SkinCommand_get_smooth_factor helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::set_threshold(const int32_t threshold) {
  bool _return = false;
  SkinCommand_set_threshold helper;
  helper.threshold = threshold;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
int32_t SkinCommand::get_threshold() {
  int32_t _return = 0;
  SkinCommand_get_threshold helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::set_gain(const double gain) {
  bool _return = false;
  SkinCommand_set_gain helper;
  helper.gain = gain;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
double SkinCommand::get_gain() {
  double _return = (double)0;
  SkinCommand_get_gain helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::set_contact_gain(const double gain) {
  bool _return = false;
  SkinCommand_set_contact_gain helper;
  helper.gain = gain;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
double SkinCommand::get_contact_gain() {
  double _return = (double)0;
  SkinCommand_get_contact_gain helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::is_calibrating() {
  bool _return = false;
  SkinCommand_is_calibrating helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::set_pose(const BodyPart body_part, const SkinPart skin_part, const int32_t taxel_index, const TaxelPose& pose) {
  bool _return = false;
  SkinCommand_set_pose helper;
  helper.body_part = body_part;
  helper.skin_part = skin_part;
  helper.taxel_index = taxel_index;
  helper.pose = pose;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
TaxelPose SkinCommand::get_pose(const BodyPart body_part, const SkinPart skin_part, const int32_t taxel_index) {
  TaxelPose _return;
  SkinCommand_get_pose helper;
  helper.body_part = body_part;
  helper.skin_part = skin_part;
  helper.taxel_index = taxel_index;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::set_poses_skin_part(const BodyPart body_part, const SkinPart skin_part, const std::vector<TaxelPose> & poses) {
  bool _return = false;
  SkinCommand_set_poses_skin_part helper;
  helper.body_part = body_part;
  helper.skin_part = skin_part;
  helper.poses = poses;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
std::vector<TaxelPose>  SkinCommand::get_poses_skin_part(const BodyPart body_part, const SkinPart skin_part) {
  std::vector<TaxelPose>  _return;
  SkinCommand_get_poses_skin_part helper;
  helper.body_part = body_part;
  helper.skin_part = skin_part;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::set_poses_body_part(const BodyPart body_part, const std::vector<TaxelPose> & poses) {
  bool _return = false;
  SkinCommand_set_poses_body_part helper;
  helper.body_part = body_part;
  helper.poses = poses;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
std::vector<TaxelPose>  SkinCommand::get_poses_body_part(const BodyPart body_part) {
  std::vector<TaxelPose>  _return;
  SkinCommand_get_poses_body_part helper;
  helper.body_part = body_part;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
bool SkinCommand::set_poses_all(const std::vector<TaxelPose> & poses) {
  bool _return = false;
  SkinCommand_set_poses_all helper;
  helper.poses = poses;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
std::vector<TaxelPose>  SkinCommand::get_poses_all() {
  std::vector<TaxelPose>  _return;
  SkinCommand_get_poses_all helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}
std::map<std::string, std::string>  SkinCommand::get_info() {
  std::map<std::string, std::string>  _return;
  SkinCommand_get_info helper;
  bool ok = yarp().write(helper,helper);
  return ok?helper._return:_return;
}

bool SkinCommand::read(yarp::os::ConnectionReader& connection) {
  yarp::os::idl::WireReader reader(connection);
  reader.expectAccept();
  if (!reader.readListHeader()) return false;
  yarp::os::ConstString tag = reader.readTag();
  while (!reader.isError()) {    // TODO: use quick lookup, this is just a test
    if (tag == "calib") {
      bool _return;
      _return = calib();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      reader.accept();
      return true;
    }
    if (tag == "get_touch_thresholds") {
      std::vector<double>  _return;
      _return = get_touch_thresholds();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      {
        if (!writer.writeListBegin(BOTTLE_TAG_DOUBLE, static_cast<uint32_t>(_return.size()))) return false;
        std::vector<double> ::iterator _iter32;
        for (_iter32 = _return.begin(); _iter32 != _return.end(); ++_iter32)
        {
          if (!writer.writeDouble((*_iter32))) return false;
        }
        if (!writer.writeListEnd()) return false;
      }
      reader.accept();
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
      reader.accept();
      return true;
    }
    if (tag == "get_binarization") {
      bool _return;
      _return = get_binarization();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      reader.accept();
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
      reader.accept();
      return true;
    }
    if (tag == "get_smooth_filter") {
      bool _return;
      _return = get_smooth_filter();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      reader.accept();
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
      reader.accept();
      return true;
    }
    if (tag == "get_smooth_factor") {
      double _return;
      _return = get_smooth_factor();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeDouble(_return)) return false;
      reader.accept();
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
      reader.accept();
      return true;
    }
    if (tag == "get_threshold") {
      int32_t _return;
      _return = get_threshold();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeI32(_return)) return false;
      reader.accept();
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
      reader.accept();
      return true;
    }
    if (tag == "get_gain") {
      double _return;
      _return = get_gain();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeDouble(_return)) return false;
      reader.accept();
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
      reader.accept();
      return true;
    }
    if (tag == "get_contact_gain") {
      double _return;
      _return = get_contact_gain();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeDouble(_return)) return false;
      reader.accept();
      return true;
    }
    if (tag == "is_calibrating") {
      bool _return;
      _return = is_calibrating();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      reader.accept();
      return true;
    }
    if (tag == "set_pose") {
      BodyPart body_part;
      SkinPart skin_part;
      int32_t taxel_index;
      TaxelPose pose;
      int32_t ecast33;
      BodyPartVocab cvrt34;
      if (!reader.readEnum(ecast33,cvrt34)) return false;
      body_part = (BodyPart)ecast33;
      int32_t ecast35;
      SkinPartVocab cvrt36;
      if (!reader.readEnum(ecast35,cvrt36)) return false;
      skin_part = (SkinPart)ecast35;
      if (!reader.readI32(taxel_index)) return false;
      if (!reader.read(pose)) return false;
      bool _return;
      _return = set_pose(body_part,skin_part,taxel_index,pose);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      reader.accept();
      return true;
    }
    if (tag == "get_pose") {
      BodyPart body_part;
      SkinPart skin_part;
      int32_t taxel_index;
      int32_t ecast37;
      BodyPartVocab cvrt38;
      if (!reader.readEnum(ecast37,cvrt38)) return false;
      body_part = (BodyPart)ecast37;
      int32_t ecast39;
      SkinPartVocab cvrt40;
      if (!reader.readEnum(ecast39,cvrt40)) return false;
      skin_part = (SkinPart)ecast39;
      if (!reader.readI32(taxel_index)) return false;
      TaxelPose _return;
      _return = get_pose(body_part,skin_part,taxel_index);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.write(_return)) return false;
      reader.accept();
      return true;
    }
    if (tag == "set_poses_skin_part") {
      BodyPart body_part;
      SkinPart skin_part;
      std::vector<TaxelPose>  poses;
      int32_t ecast41;
      BodyPartVocab cvrt42;
      if (!reader.readEnum(ecast41,cvrt42)) return false;
      body_part = (BodyPart)ecast41;
      int32_t ecast43;
      SkinPartVocab cvrt44;
      if (!reader.readEnum(ecast43,cvrt44)) return false;
      skin_part = (SkinPart)ecast43;
      {
        poses.clear();
        uint32_t _size45;
        yarp::os::idl::WireState _etype48;
        reader.readListBegin(_etype48, _size45);
        poses.resize(_size45);
        uint32_t _i49;
        for (_i49 = 0; _i49 < _size45; ++_i49)
        {
          if (!reader.readNested(poses[_i49])) return false;
        }
        reader.readListEnd();
      }
      bool _return;
      _return = set_poses_skin_part(body_part,skin_part,poses);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      reader.accept();
      return true;
    }
    if (tag == "get_poses_skin_part") {
      BodyPart body_part;
      SkinPart skin_part;
      int32_t ecast50;
      BodyPartVocab cvrt51;
      if (!reader.readEnum(ecast50,cvrt51)) return false;
      body_part = (BodyPart)ecast50;
      int32_t ecast52;
      SkinPartVocab cvrt53;
      if (!reader.readEnum(ecast52,cvrt53)) return false;
      skin_part = (SkinPart)ecast52;
      std::vector<TaxelPose>  _return;
      _return = get_poses_skin_part(body_part,skin_part);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      {
        if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(_return.size()))) return false;
        std::vector<TaxelPose> ::iterator _iter54;
        for (_iter54 = _return.begin(); _iter54 != _return.end(); ++_iter54)
        {
          if (!writer.writeNested((*_iter54))) return false;
        }
        if (!writer.writeListEnd()) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "set_poses_body_part") {
      BodyPart body_part;
      std::vector<TaxelPose>  poses;
      int32_t ecast55;
      BodyPartVocab cvrt56;
      if (!reader.readEnum(ecast55,cvrt56)) return false;
      body_part = (BodyPart)ecast55;
      {
        poses.clear();
        uint32_t _size57;
        yarp::os::idl::WireState _etype60;
        reader.readListBegin(_etype60, _size57);
        poses.resize(_size57);
        uint32_t _i61;
        for (_i61 = 0; _i61 < _size57; ++_i61)
        {
          if (!reader.readNested(poses[_i61])) return false;
        }
        reader.readListEnd();
      }
      bool _return;
      _return = set_poses_body_part(body_part,poses);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      reader.accept();
      return true;
    }
    if (tag == "get_poses_body_part") {
      BodyPart body_part;
      int32_t ecast62;
      BodyPartVocab cvrt63;
      if (!reader.readEnum(ecast62,cvrt63)) return false;
      body_part = (BodyPart)ecast62;
      std::vector<TaxelPose>  _return;
      _return = get_poses_body_part(body_part);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      {
        if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(_return.size()))) return false;
        std::vector<TaxelPose> ::iterator _iter64;
        for (_iter64 = _return.begin(); _iter64 != _return.end(); ++_iter64)
        {
          if (!writer.writeNested((*_iter64))) return false;
        }
        if (!writer.writeListEnd()) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "set_poses_all") {
      std::vector<TaxelPose>  poses;
      {
        poses.clear();
        uint32_t _size65;
        yarp::os::idl::WireState _etype68;
        reader.readListBegin(_etype68, _size65);
        poses.resize(_size65);
        uint32_t _i69;
        for (_i69 = 0; _i69 < _size65; ++_i69)
        {
          if (!reader.readNested(poses[_i69])) return false;
        }
        reader.readListEnd();
      }
      bool _return;
      _return = set_poses_all(poses);
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      if (!writer.writeBool(_return)) return false;
      reader.accept();
      return true;
    }
    if (tag == "get_poses_all") {
      std::vector<TaxelPose>  _return;
      _return = get_poses_all();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      {
        if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(_return.size()))) return false;
        std::vector<TaxelPose> ::iterator _iter70;
        for (_iter70 = _return.begin(); _iter70 != _return.end(); ++_iter70)
        {
          if (!writer.writeNested((*_iter70))) return false;
        }
        if (!writer.writeListEnd()) return false;
      }
      reader.accept();
      return true;
    }
    if (tag == "get_info") {
      std::map<std::string, std::string>  _return;
      _return = get_info();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      {
        if (!writer.writeMapBegin(BOTTLE_TAG_STRING, BOTTLE_TAG_STRING, static_cast<uint32_t>(_return.size()))) return false;
        std::map<std::string, std::string> ::iterator _iter71;
        for (_iter71 = _return.begin(); _iter71 != _return.end(); ++_iter71)
        {
          if (!writer.writeListBegin(0,2)) return false;
          if (!writer.writeString(_iter71->first)) return false;
          if (!writer.writeString(_iter71->second)) return false;
          if (!writer.writeListEnd()) return false;
        }
        if (!writer.writeMapEnd()) return false;
      }
      reader.accept();
      return true;
    }
    yarp::os::ConstString next_tag = reader.readTag();
    if (next_tag=="") break;
    tag = tag + "_" + next_tag;
  }
  return false;
}
}} // namespace


