/* In the pre-filled code, add the class definitions for the
 * Bicycle and Storage classes according to the UML class diagram below.
 */

#include <iostream>
using namespace std;

class Bicycle {
public:
    Bicycle();
    ~Bicycle();
};


class Storage {
private:
    Bicycle a;
    Bicycle b;
    Bicycle c;

public:
    Storage();
    ~Storage();
};


Bicycle::Bicycle()
{
    cout<<"A new Bicycle created"<<endl;
}

Bicycle::~Bicycle()
{
    cout<<"Bicycle deleted "<<endl;
}

Storage::Storage()
{
    cout<<"A new bicycle storage created"<<endl;
}

Storage::~Storage()
{
    cout<<"Bicycle storage deleted"<<endl;
}
