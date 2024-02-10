#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"
#include "kerros.h"

class Kerrostalo {
private:
    Kerros* toka;
    Katutaso* eka;
    Kerros* kolmas;

public:
    Kerrostalo();
    ~Kerrostalo();
    void maaritaKaikkiAsunnot();
    double laskeKulutus(double hintakerroin);
};

#endif // KERROSTALO_H
