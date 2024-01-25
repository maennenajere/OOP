#ifndef A_H
#define A_H
#include <iostream>

using namespace std;


// yliluokka
class A
{
public:
    A();
    ~A();

    void public_A();
    int public_A_muuttuja;

protected:
    void protected_A();

private:
    void private_A();
    int A_muuttuja;
};

#endif // A_H
