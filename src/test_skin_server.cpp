// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

#include <stdio.h>
#include <yarp/os/all.h>
#include <iCub/SkinCommand.h>

using namespace yarp::os;
using namespace std;

class SkinCommandServer : public SkinCommand {
private:
    double factor;
    TaxelPose omnipose;
public:
    SkinCommandServer() {
        factor = 0;
        omnipose.pose.push_back(42.1);
        omnipose.pose.push_back(42.2);
        omnipose.pose.push_back(42.3);
        omnipose.pose.push_back(42.42);
        omnipose.pose.push_back(42.5);
        omnipose.pose.push_back(42.6);
    }

    virtual bool calib() {
        printf("Calibrating...\n");
        return true;
    }

    virtual bool set_binarization(const bool flag) {
        printf("Binarization flag is %s\n", flag?"ON":"OFF");
        return flag;
    }

    virtual std::vector<double> get_touch_thresholds() {
        std::vector<double> v;
        v.push_back(20);
        v.push_back(50);
        return v;
    }

    virtual bool set_smooth_factor(double factor) {
        this->factor = factor;
        return true;
    }

    virtual double get_smooth_factor() {
        return factor;
    }

    virtual map<string,string> get_info() {
        map<string,string> result;
        result["color"] = "green";
        result["animal"] = "frog";
        return result;
    }

    virtual bool set_pose(const std::string& body_part, const std::string& skin_part, const int32_t taxel_index, const TaxelPose& pose) {
        omnipose = pose;
        return true;
    }

    virtual TaxelPose get_pose(const std::string& body_part, const std::string& skin_part, const int32_t taxel_index) {
        return omnipose;
    }

    virtual bool set_poses_all(const std::vector<TaxelPose> & poses) {
        if (poses.size()>0) {
            omnipose = poses[0];
        }
        return true;
    }

    virtual std::vector<TaxelPose> get_poses_all() {
        std::vector<TaxelPose> poses;
        poses.push_back(omnipose);
        poses.push_back(omnipose);
        poses.push_back(omnipose);
        return poses;
    }
};

int main(int argc, char *argv[]) {
    Network yarp;
    int r;

    SkinCommandServer skin;
    Port port;
    skin.yarp().attachAsServer(port);
    if (!port.open("/skin/server")) { return 1; }

    while (true) {
        printf("Server running happily\n");
        Time::delay(10);
    }
  
    return 0;
}
