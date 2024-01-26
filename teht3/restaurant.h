#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <iostream>

using namespace std;

class Chef
{

protected:
    string name;

public:
    string Chef;
    void makeSalad();
    void makeSoup();

};


class ItalianChef:public Chef
{
public:
    ItalianChef(string);
    string getName();
    void makePasta();

};

#endif // RESTAURANT_H
