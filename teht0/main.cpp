/*exercise during the lecture*/

#include <iostream>
#include <iomanip>

using namespace std;

float keskiarvo(void) {
    float taulukko[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float ka = 0.0;

    for (int i = 0; i < 5; i++) {
        ka = ka + taulukko[i];
    }
    ka = ka / 5.0;
    return ka;
}

int main()
{   /*
        int kokonaisluku = 32;
        float liukuluku1 = 3.145;
        double liukuluku2 = 56.56;
        char a = 'b';
        string merkkijono = "yykaanee";

        int luku = 0;
        cout << "Anna luku? " << endl;
        cin >> luku;
        cout << "Annoit luvun " << luku << endl;
    */

    /*
        cout << "Moro maailma TVT23SPO!:)" << endl;
        cout << merkkijono << endl;
    */

        float tulos = keskiarvo();
    cout << setprecision(5) << tulos << endl;
        return 0;
}

