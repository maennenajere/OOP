#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad() {}

DeviceTouchPad::~DeviceTouchPad() {}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout << "Enter touchpad sensitivity (1-5): " << endl;
    cin >> touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
