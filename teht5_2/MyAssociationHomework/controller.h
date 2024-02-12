#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "sensor.h"

class Controller
{
public:
    Controller(Sensor* sensor);
    void listen();
private:
    Sensor* objectSensor;
};

#endif // CONTROLLER_H
