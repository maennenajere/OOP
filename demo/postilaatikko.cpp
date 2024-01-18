#include "postilaatikko.h"

postilaatikko::postilaatikko()
{

    cout << "Luodaan Postilaatikko" << endl;
    maara = 0;
    cout << "Maara on " << maara << endl;
}

void postilaatikko::lisaaPosti(int m)
{

    cout << "Lisataan postia " << m << endl;
    maara = maara + m;
    cout << "Maara on " << maara << endl;
}

void postilaatikko::otaPosti(int m)
{

    cout << "Otetaan postia " << m << endl;
    maara = maara - m;
    cout << "Maara on " << maara << endl;

}

void postilaatikko::asetaNimi(string n)
{

    cout << "Ollaan asetaNimi" << endl;

}

