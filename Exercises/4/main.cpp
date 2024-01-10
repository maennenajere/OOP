/* Harjoitellaan syötteen lukemista käyttäjältä.
 * Laadi ohjelma, joka pyytää käyttäjältä kokonaisluvun käyttäen cin-oliota, kertoo luvun kahdella ja tulostaa tuloksen ruudulle cout-oliolla.
 * Luvun kysyminen tehdään ensin tulostamalla ruutuun kysymysmerkki, jonka perään käyttäjän syöte.
 *
*/

#include <iostream>

int main() {
    int kokonaisluku;

    std::cout << "?";
    std::cin >> kokonaisluku;
    std::cout << kokonaisluku * 2;

    return 0;
}
