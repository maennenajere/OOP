/*
Create a function terveiset(int num) that greets everyone with "Terve x",
where x is a number starting from one.
For example, a call to terveiset(3) would return:

Terve 1
Terve 2
Terve 3

(Terve is hello in finnish)
*/

#include <iostream>

void terveiset(int num) {

    for (int i = 1; i <= num; ++i) {
    std::cout << "Terve " << i << std::endl;
    }
}
