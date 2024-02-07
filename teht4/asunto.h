#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto {
public:
    Asunto();
    ~Asunto();
    int neliot;
    int asukasMaara;
    void maarita(int asukasMaara, int neliot);
    double laskeKulutus(double kulutus);
};

#endif // ASUNTO_H
