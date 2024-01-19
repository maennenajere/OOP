/*
 * Write a class definition according to the UML class of the image.
 * Copy the class definition code from the UML class diagram below as a base for your answer
 * and write the class variable and function definitions inside the class structure.
 * Note that for the constructor, destructor, private variables and private functions,
 * you have already been provided with example code in the assignment.
*/

#ifndef MYCLASS_H
#define MYCLASS_H
#include <string>

using namespace std;

class myClass
{
public:
    myClass();
    ~myClass();
    void publicFunction(string s);
    string publicTextToPrint;

private:
    string privateTextToPrint;
    void privateFunction();

protected:
    string protectedTextToPrint;
    void protectedFunction();
};

#endif // MYCLASS_H
