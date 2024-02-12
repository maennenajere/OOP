#include "controller.h"

Controller::Controller(Sensor* sensor) : objectSensor(sensor) {}

void Controller::listen() {
    if (objectSensor != nullptr) {
        objectSensor->listen();
    }
}
