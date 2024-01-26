/* Add to the given code the definitions of the classes shown in the UML diagram below. */

#include <iostream>

using namespace std;

class GrandFather {
public:
    string Grandname;

    GrandFather()
    {
        cout << "GrandFather is born!" << endl;
    }

    void setGrandName(string n) {
        Grandname = n;
    }

    string getGrandName() {
        return Grandname;
    }
};

class Father: public GrandFather {
public:
    string Fathername;

    Father()
    {
        cout << "Father is born!" << endl;
    }

    void setFatherName (string n)
    {
        Fathername = n;
    }

    string getFatherName()
    {
        return Fathername;
    }

};


class Son:public Father {
public:
    string name;

    Son(string n)
    {
        cout << "Son "<< n << " is born!" << endl;
        setName(n);
        setFatherName(n + "'s Father");
        setGrandName(n + "'s GrandFather");
    }

    void setName(string n)
    {
        name = n;
    }

    string getName() {
        return name;
    }
};
