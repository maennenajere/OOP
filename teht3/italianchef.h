#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef {

public:
    ItalianChef(string n, int jauhot, int vesi);
    ~ItalianChef();
    void makePasta();
    string getName();

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H

