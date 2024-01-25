/*
 * Implement the class definitions of the BasicALU and Calculator classes according to the UML class diagram below and implement the methods of the BasicALU class.
 * The task has already provided implementations of the Calculator class methods. Note that the Calculator class inherits the BasicALU class.
 */

#include <iostream>

using namespace std;

class BasicALU {

public:
    BasicALU()
    {
        cout << "BasicALU constructor!!" << endl;
    }

    double sum(double op1 , double op2)
    {
        return op1 + op2;
    }

    double sub(double op1 , double op2)
    {
        return op1 - op2;
    }

    double mul(double op1 , double op2)
    {
        return op1 * op2;
    }

    double div(double op1 , double op2)
    {
        return op1 / op2;
    }

};

class Calculator:public BasicALU {
private:
    double op1, op2, result;
    char operation;

public:
    Calculator()
    {
        cout<<"Calculator constructor!!"<<endl;
    }

    void inputOperands()
    {

        cout<<"Give first operand"<<endl;
        cin>>op1;

        cout<<"Give operation +, -, * or / "<<endl;
        cin>>operation;

        cout<<"Give second operand"<<endl;
        cin>>op2;
    }

    void calculateResult()
    {
        switch (operation) {
        case '+':
            result = sum(op1,op2);
            break;
        case '-':
            result = sub(op1,op2);
            break;
        case '*':
            result = mul(op1,op2);
            break;
        case '/':
            result = div(op1,op2);
            break;
        default:
            cout<<"No such operation!"<<endl;

        }
    }

    void showResults()
    {
        cout<<op1 << operation << op2 << " = " << result << endl;
    }
};
