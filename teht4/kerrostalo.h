#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo {
public:
    Kerrostalo();
    ~Kerrostalo();
    void maaritaKaikkiAsunnot();
    double laskeKulutus(double hintakerroin);

private:
    Kerros toka;
    Katutaso eka;
    Kerros kolmas;
};


#endif // KERROSTALO_H

