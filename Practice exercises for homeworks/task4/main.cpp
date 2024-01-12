/*
 * Practise reading input from the user.
 * Write a program that asks the user for an integer using the cin,
 * multiplies the number by 2 and prints the result on the screen using the cout.
 * To ask for a number, first print a question mark(?) on the screen followed by the user's input.
*/

#include <iostream>

int main() {
    int kokonaisluku;

    std::cout << "?";
    std::cin >> kokonaisluku;
    std::cout << kokonaisluku * 2;

    return 0;
}
