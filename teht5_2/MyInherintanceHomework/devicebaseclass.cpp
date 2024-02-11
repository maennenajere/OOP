#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass() {}

DeviceBaseClass::~DeviceBaseClass() {}

void DeviceBaseClass::setDeviceID()
{
    cout << "Enter device ID: " << endl;
    cin >> deviceID;
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
