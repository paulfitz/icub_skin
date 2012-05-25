// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

#include <stdio.h>
#include <yarp/os/all.h>
#include <iCub/SkinManager.h>

using namespace yarp::os;
using namespace std;

class SkinManagerServer : public SkinManager {
private:
    double factor;
public:
    SkinManagerServer() {
        factor = 0;
    }

    virtual bool calib() {
        printf("Calibrating...\n");
        return true;
    }

    virtual bool set_binarization(const bool flag) {
        printf("Binarization flag is %s\n", flag?"ON":"OFF");
        return flag;
    }

    virtual std::vector<int32_t> get_touch_thresholds() {
        std::vector<int32_t> v;
        v.push_back(20);
        v.push_back(50);
        return v;
    }

    bool set_smooth_factor(double factor) {
        this->factor = factor;
        return true;
    }

    double get_smooth_factor() {
        return factor;
    }

    map<string,string> get_info() {
        map<string,string> result;
        result["color"] = "green";
        result["animal"] = "frog";
        return result;
    }
};

int main(int argc, char *argv[]) {
    Network yarp;
    int r;

    SkinManagerServer skin;
    Port port;
    skin.yarp().attachAsServer(port);
    if (!port.open("/skin/server")) { return 1; }

    while (true) {
        printf("Server running happily\n");
        Time::delay(10);
    }
  
    return 0;
}
