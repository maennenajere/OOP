/* Please refer to the code given in the response form.
 * Modify the three lines in the main function with ??? to get the expected result required by the test case.
 *
 * Test     Output
 * main();  This is assosiation
 *          This is aggregation
 *          This is composition
 */

#include <iostream>

using namespace std;

class ClassB
{
public:
    ClassB();
    void printAssosiation(void);
    void printAggregation(void);
    void printComposition(void);
};


class ClassA
{
public:
    ClassA();
    void print1(ClassB B);
    void print2(ClassB &B);
    void print3();
};


ClassA::ClassA()
{

}

void ClassA::print1(ClassB B)
{
    B.printAssosiation();
}

void ClassA::print2(ClassB & B)
{
    B.printAggregation();
}

void ClassA::print3()
{
    ClassB B;
    B.printComposition();
}


ClassB::ClassB()
{

}

void ClassB::printAssosiation()
{
    cout << "This is assosiation" << endl;
}

void ClassB::printAggregation()
{
    cout << "This is aggregation" << endl;
}

void ClassB::printComposition()
{
    cout << "This is composition" << endl;
}

int main()
{

    ClassA objectA;
    ClassB objectB;
    ClassB & refB = objectB;


    objectA.print1(objectB);
    objectA.print2(refB);
    objectA.print3();

    return 0;

}
