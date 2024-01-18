#ifndef POSTILAATIKKO_H
#define POSTILAATIKKO_H
#include <iostream>

using namespace std;


class postilaatikko
{
public:
    postilaatikko();

    string nimi;
    string osoite;

    void lisaaPosti(int maara);
    void otaPosti(int maara);
    void asetaNimi(string nimi);

private:
    int maara;


};

#endif // POSTILAATIKKO_H
