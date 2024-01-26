#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string n)
{
    name = n;
    cout << "Chef " << name << "Konstruktori" << endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << "makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << "makes soup" << endl;
}


