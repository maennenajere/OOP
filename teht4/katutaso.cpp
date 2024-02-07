#include "katutaso.h"
#include <iostream>

using namespace std;

Katutaso::Katutaso() {
    cout << "Katutaso rakennettu" << endl;
}

Katutaso::~Katutaso() {}

void Katutaso::maaritaAsunnot() {
    cout << "Maaritellaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
}

double Katutaso::laskeKulutus(double hintakerroin) {
    double kulutus = as1.laskeKulutus(hintakerroin) + as2.laskeKulutus(hintakerroin);
    return kulutus;
}

