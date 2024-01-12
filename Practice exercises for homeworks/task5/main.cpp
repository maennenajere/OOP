/*
    Create a function that calculates the coefficient of the number given as a parameter and prints it to the console.
    - if the number given as a parameter is greater than 10, the multiplier is not calculated but the text "Luku on liian iso" is printed
    - if the given number is less than 1, "Ei voida laskea" is printed
*/

#include <iostream>

void kertoma(int num) {

    if(num > 10) {
        std::cout << "Luku on liian iso" << std::endl;
    }   else if (num < 1) {
        std::cout << "Ei voida laskea" << std::endl;
    } else {
        long tulos = 1;
        for (int i = 1; i <= num; ++i) {
            tulos *= i;
        }
        std::cout << tulos << std::endl;
    }
}
