/*
Create a function terveiset(int num) that greets everyone with "Hello x", where x is a number starting from one. For example, a call to greetings(3) would return:
terve 1
terve 2
terve 3
*/

void terveiset(int num) {

    for (int i = 1; i <= num; ++i) {
        std::cout << "Terve " << i << std::endl;
    }
}
