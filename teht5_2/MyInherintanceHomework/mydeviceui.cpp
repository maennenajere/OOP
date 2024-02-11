#include "mydeviceui.h"
#include <iostream>
#include <limits>

using namespace std;

MyDeviceUI::MyDeviceUI() {
    objectDeviceMouse = new DeviceMouse;
    objectDeviceDisplay = new DeviceDisplay;
    objectDeviceTouchPad = new DeviceTouchPad;
}

MyDeviceUI::~MyDeviceUI() {
    delete objectDeviceDisplay;
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
}

void MyDeviceUI::uiShowMenu() {
    int choice = 0;

    cout << "\n====| DEVICE MENU |====\n=======================\n";
    cout << "1. Set Mouse Information\n";
    cout << "2. Set Touch Pad Information\n";
    cout << "3. Set Display Information\n";
    cout << "4. Show Devices Information\n";
    cout << "5. Finish!\n\n";
    cout << "Choose: ";

    while (!(cin >> choice) || choice < 1 || choice > 5) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Enter a number between 1-5: ";
    }

    switch (choice) {
    case 1: uiSetMouseInformation();
    case 2: uiSetTouchPadInformation();
    case 3: uiSetDisplayInformation();
    case 4: uiShowDeviceInformation(); break;
    case 5: return;
    }
}

void MyDeviceUI::uiSetMouseInformation()
{
    objectDeviceMouse->setDeviceID();
    objectDeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    objectDeviceTouchPad->setDeviceID();
    objectDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    objectDeviceDisplay->setDeviceID();
    objectDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation() {
    cout << "\n=====Device information=====\n" << endl;
    cout << "Mouse data:" << endl;
    cout << "Device ID: " << objectDeviceMouse->getDeviceID() << endl;
    cout << "Primary button: " << objectDeviceMouse->getPrimaryButton() << endl;

    cout << "Touchpad information:" << endl;
    cout << "Device ID: " << objectDeviceTouchPad->getDeviceID() << endl;
    cout << "Sensitivity of the touchpad: " << objectDeviceTouchPad->getTouchPadSensitivity() << endl;

    cout << "Screen information:" << endl;
    cout << "Device ID: " << objectDeviceDisplay->getDeviceID() << endl;
    cout << "Resolution: " << objectDeviceDisplay->getDisplayResolution() << endl;
    cout << "\nThank you! :)\n" << endl;
}
