// This is an automatically-generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/os/idl/WireTypes.h>

#include <iCub/SkinManager.h>

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
      uint32_t _size5;
      yarp::os::idl::WireState _ktype6;
      yarp::os::idl::WireState _vtype7;
      reader.readMapBegin(_ktype6, _vtype7, _size5);
      uint32_t _i9;
      for (_i9 = 0; _i9 < _size5; ++_i9)
      {
                uint32_t _size11;
        yarp::os::idl::WireState _lst10;
        reader.readListBegin(_lst10, _size11);
        std::string _key12;
        if (!reader.readString(_key12)) return false;
        std::string& _val13 = _return[_key12];
        if (!reader.readString(_val13)) return false;
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
        std::vector<int32_t> ::const_iterator _iter14;
        for (_iter14 = _return.begin(); _iter14 != _return.end(); ++_iter14)
        {
          if (!writer.writeI32((*_iter14))) return false;
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
    if (tag == "get_info") {
      std::map<std::string, std::string>  _return;
      _return = get_info();
      yarp::os::idl::WireWriter writer(reader);
      if (!writer.writeListHeader(1)) return false;
      {
        if (!writer.writeMapBegin(BOTTLE_TAG_STRING, BOTTLE_TAG_STRING, static_cast<uint32_t>(_return.size()))) return false;
        std::map<std::string, std::string> ::const_iterator _iter15;
        for (_iter15 = _return.begin(); _iter15 != _return.end(); ++_iter15)
        {
          if (!writer.writeListBegin(0,2)) return false;
          if (!writer.writeString(_iter15->first)) return false;
          if (!writer.writeString(_iter15->second)) return false;
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
