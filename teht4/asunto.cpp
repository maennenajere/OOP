#include <iostream>
#include "asunto.h"

using namespace std;

Asunto::Asunto() {
    cout << "Asunto rakennettu" << endl;
}

Asunto::~Asunto() {}

void Asunto::maarita(int asukasMaara, int neliot) {
    this->asukasMaara = asukasMaara;
    this->neliot = neliot;

    cout << "Asunto maaritetty asukkaita: " << asukasMaara << " nelioita: " << neliot << endl;
}

double Asunto::laskeKulutus(double hintakerroin) {
    double kulutus = hintakerroin * asukasMaara * neliot;
    cout << "asunnon kulutus, kun hinta: "<< hintakerroin <<" on "<< kulutus << endl;

    return 0.0;
}
