#include "b.h"

B::B() {
    cout << "B konstrukori" << endl;
}

B::~B() {
    cout << "B destruktori" << endl;
}

void B::public_B()
{
    cout << "public B" << endl;
    protected_A();
}
