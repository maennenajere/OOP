#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main() {

    Kerrostalo kerrostalo;
    kerrostalo.maaritaKaikkiAsunnot();

    double kokonaiskulutus = kerrostalo.laskeKulutus(2800.00);
    cout << "Kerrostalon kokonaiskulutus: " << kokonaiskulutus << endl;

    return 0;
};
