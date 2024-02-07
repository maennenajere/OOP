/* Make a subroutine int sum(int &, int &) that takes as parameters two references to integer variables.
 * Calculates the sum of the integers referenced by the references.
 * Finally, the subroutine returns the sum to its caller.
 */

#include <iostream>

using namespace std;

int sum(int &number1, int &number2) {
    return number1 + number2;
}

int main() {
    int number1 = 1;
    int number2 = 2;
    int &alias1 = number1;
    int &alias2 = number2;

    cout << "Result: " << sum(alias1, alias2) << endl;

    return 0;
}
