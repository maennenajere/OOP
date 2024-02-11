#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay() {}

DeviceDisplay::~DeviceDisplay() {}

void DeviceDisplay::setDisplayResolution()
{
    cout << "Enter diplay resolution (1-10): " << endl;
    cin >> displayResolution;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
