/*
Create the function void tarkista(int num), which compares the value of the parameter and prints the corresponding information to the screen. So the program:
- prints the word "positive" if num > 0
- prints the word "negative" if num < 0
- prints the word 'zero' if num = 0
*/

#include <iostream>

void tarkista(int num) {
    if (num > 0) {
        std::cout << "positiivinen" << std::endl;
    }   else if (num < 0) {
        std::cout << "negatiivinen" << std::endl;
    }   else {
        std::cout << "nolla" << std::endl;
    }
}
