#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo() {
    cout << "Kerrostalo rakennettu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
}

Kerrostalo::~Kerrostalo() {}

void Kerrostalo::maaritaKaikkiAsunnot() {
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hintakerroin) {
    return hintakerroin;
}

