#include "devicemouse.h"

DeviceMouse::DeviceMouse() {}

DeviceMouse::~DeviceMouse() {}

void DeviceMouse::setPrimaryButton()
{
    cout << "Enter the primary mouse button (1 = left, 2 = right): " << endl;
    cin >> primaryButton;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
