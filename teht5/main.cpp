#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main() {
    Kerrostalo* kerrostalo = new Kerrostalo();
    kerrostalo->maaritaKaikkiAsunnot();

    double kokonaiskulutus = kerrostalo->laskeKulutus(2800.00);
    cout << "Kerrostalon kokonaiskulutus: " << kokonaiskulutus << endl;

    delete kerrostalo;
    return 0;
}

