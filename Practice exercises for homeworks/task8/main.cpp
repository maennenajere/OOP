/*
 * In C++, random numbers are generated using a random number generator, which needs a seed number to generate the numbers.
 * Then the generator can compute the seed number using a series of random numbers.
 * Such random numbers are called pseudo/ pseudorandom numbers because when the same seed number is used, the resulting sequence of random numbers is always the same.
 * When the seed number is changed, the sequence changes.
 * In C++, the generator is given a seed number by the srand function and the numbers are queried one by one by the rand function using the modulo operator.
*/


#include <iostream>
#include <cstdlib>

using namespace std;

void sarja(int sluku) {
    srand(sluku);

    for (int i = 0; i < 5; ++i) {
        cout << rand() % 20 << endl;
    }
}
