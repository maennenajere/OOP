#include "kerros.h"
#include "asunto.h"
#include <iostream>

using namespace std;

Kerros::Kerros() {
    cout << "Kerros rakennettu" << endl;
}

Kerros::~Kerros() {}

void Kerros::maaritaAsunnot() {
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;

    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);

}

double Kerros::laskeKulutus(double hintakerroin) {
    return hintakerroin;
}
