#ifndef CHEF_H
#define CHEF_H
#include <string>

using namespace std;

class Chef {

public:
    Chef(string n);
    ~Chef();
    void makeSalad();
    void makeSoup();
    void makePasta();
    string getName();

protected:
    string name;
};

#endif // CHEF_H
