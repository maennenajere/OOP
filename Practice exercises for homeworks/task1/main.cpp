/*
Create a C++ program that performs the following operations:
introduces the integer (int) variables a and b and initializes them to a is 4 and b is 5
multiply them by each other a * b
multiplies the result by two
adds 1 to the result
prints the result on the screen. Let's start here by immediately learning away from the C printf function and using the C++ stream std::cout, or console screen.
*/

#include <iostream>

    int main() {

    int a = 4;
    int b = 5;

    int tulos = a * b * 2;

    tulos += 1;

    std::cout << tulos << std::endl;

    return 0;
}
