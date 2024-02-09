#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros : public Asunto
{
private:
    Asunto* as1;
    Asunto* as2;
    Asunto* as3;
    Asunto* as4;
public:
    Kerros();
    ~Kerros();

    virtual void maaritaAsunnot();
    double laskeKulutus(double hintakerroin);
};

#endif // KERROS_H
