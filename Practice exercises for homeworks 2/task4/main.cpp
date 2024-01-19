/*
 * Create the class Apartment from the following UML class diagram.
 * Remember that '-' means private and '+' means public, so "-variableName: float" becomes "private float variableName;"
 * Then, regarding the constructor method of the class, in UML and C++, the name of constructor is the class name.
 * Hence, in the UML description above you have one constructor. Here, it takes the number of tenants are the 1st
 * integer parameter and area of the apartment as the 2nd integer parameter. Constructor of a C++ class does not
 * have a return value hence just ":" but no return value type.
 * In this exercise, the method heatingCost() takes no parameters (hence void) in signature,
 * but calculates the heating as "int cost = numOfTenants * area;" and returns it.
*/


#include <iostream>

using namespace std;

class Apartment {
public:
    Apartment(int tenants, int area) : numOfTenants(tenants), area(area) {}

    int heatingCost() {
        return numOfTenants * area;
    }

private:
    int numOfTenants;
    int area;
};


