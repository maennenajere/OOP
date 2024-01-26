#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(string n);
    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
