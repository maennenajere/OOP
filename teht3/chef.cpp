#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string n) : name(n)
{
    cout << "Chef " << name << " konstruktori\n";
}

Chef::~Chef()
{
   cout << "Chef " << name << " destruktori\n";
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad\n";
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup\n";
}

void Chef::makePasta()
{
    cout << "Chef " << name << " makes pasta\n";
}
