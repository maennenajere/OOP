// In the given code base, add the definitions of the classes according to the UML class diagram below.

#include <iostream>

using namespace std;

class Bicycle {
public:
    Bicycle();
    ~Bicycle();
};

class Fatbike : public Bicycle {
public:
    Fatbike();
    ~Fatbike();
};

class Storage {
public:
    Storage();
    ~Storage();

private:
    Bicycle a;
    Bicycle b;
    Bicycle c;
    Fatbike d;
    Fatbike e;

};


Bicycle::Bicycle()
{
    cout << "A new Bicycle created" << endl;
}

Bicycle::~Bicycle()
{
    cout << "Bicycle deleted " << endl;
}

Fatbike::Fatbike()
{
    cout << "A new Fatbike created" << endl;
}

Fatbike::~Fatbike()
{
    cout << "Fatbike deleted " << endl;
}

Storage::Storage()
{
    cout << "A new bicycle storage created" << endl;
}

Storage::~Storage()
{
    cout << "Bicycle storage deleted" << endl;
}
