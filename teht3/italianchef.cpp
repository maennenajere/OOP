#include "italianchef.h"
#include "chef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string n, int jauhot, int vesi) : Chef(n), vesi(vesi), jauhot(jauhot) {
    cout << "Chef " << name << " konstruktori\n";
}

ItalianChef::~ItalianChef() {
    cout << "Chef " << name << " destruktori\n";
}

void ItalianChef::makePasta() {
    cout << "Chef " << name << " makes pasta with a special encrypted recipe!" << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;
}

string ItalianChef::getName() {
    return name;
}
