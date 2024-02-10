#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo() {
    toka = new Kerros();
    eka = new Katutaso();
    kolmas = new Kerros();
    cout << "Kerrostalo rakennettu!" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot!" << endl;
}

Kerrostalo::~Kerrostalo() {
    delete eka;
    delete toka;
    delete kolmas;
}

void Kerrostalo::maaritaKaikkiAsunnot() {
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hintakerroin) {
    return hintakerroin;
}

