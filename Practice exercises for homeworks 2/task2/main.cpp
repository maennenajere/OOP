/*Write a class definition according to the UML class of the image.
 * Copy the class definition code from the UML class diagram below as a base for your answer
 * and write the class variable and function definitions inside the class structure.
 * NOTE: you do not need to implement the class methods, as they are already done.
 * So it's enough to just do that class definition (i.e. the part that is typically done in the *.h file)
*/

#ifndef MYCLASS_H
#define MYCLASS_H

class myClass
{

public:
    myClass();
    int calculateResult();
    int result;

private:
    int number1;
    int number2;


protected:
    void setNumber1(int);
    void setNumber2(int);

};

#endif // MYCLASS_H
