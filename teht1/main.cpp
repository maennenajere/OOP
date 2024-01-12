/*
 * Create a program that asks the player to guess a random number between 1 and n.
 * The player is helped by being told whether his guess is less than, greater than, or equal to the number
 * he is looking for.
 * When the guess is equal to the number, the game ends.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int num, guess;
    srand(time(0));
    num = rand() % 69 + 1;

    cout << "Guess the number\n\n";

    cin >> guess;
    cout << "Your number was: " << num << endl;
    return 0;
}
