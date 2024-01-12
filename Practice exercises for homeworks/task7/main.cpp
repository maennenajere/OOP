/*
 * Modify the previous divisibility checker (task6) to take two numbers as parameters,
 * the divisor and the divisor, and calculate the divisor residual to determine whether the divisibility was true.
 * Similarly, the function prints to the console whether the result was "divisible (jaollinen)" or "not divisible (ei jaollinen)".
*/


#include <iostream>
void tarkista_jaollisuus(int jaettava, int jakaja) {
    if (jakaja == 0) {
        std::cout << "jakaja ei voi olla nolla" << std::endl;
    } else if (jaettava % jakaja == 0) {
        std::cout << "jaollinen" << std::endl;
    } else {
        std::cout << "ei jaollinen" << std::endl;
    }
}
