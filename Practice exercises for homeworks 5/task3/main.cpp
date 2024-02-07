/* Copy the code given in the task as the answer and modify the lines in the main() function to perform the action described in the comments.
 *
 * So the idea is to write code in the main function that creates a pointing variable in the myClass object,
 * initializes that pointing variable with the new operator, and then uses the pointing variable to call the entity function.
 *
 * And finally, the object is destroyed by destroying the pointter.
 */

class myClass
{
public:
    myClass();
    ~myClass();
    void memberFunction();
};


#include <iostream>
using namespace std;

myClass::myClass()
{
    cout<<"Executing constructor..."<<endl;
}

myClass::~myClass()
{
    cout<<"Executing destructor..."<<endl;
}

void myClass::memberFunction()
{
    cout<<"Running member function..."<<endl;
}


int main()
{
    // Tässä tehdään pointteri myClass olioon. Pointteri tulee varatuksi pinosta
    // Sitten asetetaan pointterille arvo eli kaytetaan new operaatiota
    myClass *ptr = new myClass();

    // olion varaamiseksi keosta eli heapista.
    // Ja tässä sitten käytetaan pointteria memberFunktion kutsumiseen
    ptr->memberFunction();
    // Ja lopuksi pointteri vapautetaan ja olio tulee samalla tuhotuksi.
    delete ptr;

    return 0;
}
