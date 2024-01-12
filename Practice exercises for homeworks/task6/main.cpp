/*
 * Write a function that checks whether a given number is divisible by 4.
 * The idea is to use the modulo operator in C++, which returns a division operator.
 * If the number is divisible by 4, "jaollinen" is printed to the console. Otherwise, "ei jaollinen" is printed.
*/

#include <iostream>

void tarkista_jaollisuus(int num) {

    if (num % 4 == 0) {
        std::cout << "jaollinen" << std::endl;
    } else {
        std::cout << "ei jaollinen" << std::endl;
    }

}
