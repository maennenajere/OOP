/*Create a C++ class called Vehicle that has:

- a private member variable named "speed", which is an integer
- a private member variable named "name", which is a string
- as member functions getters and setters for these member variables
Note! You do not need to print anything in the code. The automatic test code will use your class and print to the console to test if your class is working correctly.

So you need to do a class definition => class Vehicle....

You also need to then make an implementation for all the methods of the class (i.e. those getter and setter functions) (e.g. as follows:)

void Vehicle::setName(string s)
{
// So here is the example body of the setter function for the private variable name of the class
// but this is missing the implementation of the function
}
*/


#include <iostream>
#ifndef MYCLASS_H
#define MYCLASS_H
using namespace std;

class Vehicle {
public:
    void setSpeed(int s) {
         speed = s;
    }
    void setName(string n) {
         name = n;
    }

    int getSpeed(){
        return speed;
    }

    string getName(){
        return name;
    }


private:
    int speed;
    string name;

};

#endif // MYCLASS_H




