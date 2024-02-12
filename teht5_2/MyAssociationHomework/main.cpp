#include "controller.h"
#include "sensor.h"
#include <iostream>

using namespace std;

int main()
{
    Sensor sensor;
    Controller controller(&sensor);
    controller.listen();
    return 0;
}
