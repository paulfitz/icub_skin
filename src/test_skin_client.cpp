// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

#include <stdio.h>
#include <yarp/os/all.h>
#include <iCub/SkinCommand.h>

using namespace yarp::os;
using namespace std;

using namespace iCub::skin;

int main(int argc, char *argv[]) {
    Network yarp;
    int r;

    SkinCommand skin;
    Port port;
    skin.yarp().attachAsClient(port);
    if (!port.open("/skin/client")) { return 1; }
    if (!port.addOutput("/skin/server")) { return 1; }

    skin.calib();
    vector<double> thresholds = skin.get_touch_thresholds();
    for (vector<double>::iterator it = thresholds.begin();
         it != thresholds.end(); it++) {
        printf("Threshold: %g\n", *it);
    }

    skin.set_smooth_factor(0.42);
    printf("Smooth factor is %g\n", skin.get_smooth_factor());

    map<string,string> info = skin.get_info();
    for (map<string,string>::iterator it = info.begin(); it != info.end(); it++) {
        printf("Info: %s -> %s\n", it->first.c_str(), it->second.c_str());
    }

    vector<TaxelPose> poses = skin.get_poses_all();
    printf("%d poses found\n", poses.size());
    for (vector<TaxelPose>::iterator it = poses.begin();
         it != poses.end(); it++) {
        // Place yarp::sig::Vectors into bottles from printing
        Bottle pos, angle;
        pos.read(it->position);
        angle.read(it->normal);
        printf("Pose: %s / %s\n", pos.toString().c_str(), angle.toString().c_str());
    }

    port.close();
  
    return 0;
}
