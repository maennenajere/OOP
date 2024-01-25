#include "a.h"

A::A() {
    cout << "A konstruktori" << endl;
}

A::~A()
{
    cout << "A destruktori" << endl;
}

void A::public_A()
{
    cout << "public A" << endl;
    protected_A();
    private_A();
    A_muuttuja = 3;
}

void A::protected_A()
{
    cout << "protected A" << endl;
    //private_A();
}

void A::private_A()
{
    cout << "private A" << endl;
}
