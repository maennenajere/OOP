#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main() {
    Chef jyrki("Jyrki");
    ItalianChef mario("Mario", 250, 100);

    jyrki.makeSalad();
    mario.makePasta();
    jyrki.makeSoup();

    return 0;
}
