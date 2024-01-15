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
    //variables
    int num, guess;

    //number generator
    srand(time(NULL));

    //target
    num = rand() % 20 + 1;


    //repeat until number correct
    do {
        //get guess
        cout << "Guess the number between 1-20: ";
        cin >> guess;

        //check the user guess
        if (guess > num) {
            cout << "The number is lower! Try again." << endl;
        } else if (guess < num) {
            cout << "The number is higher! Try again." << endl;
        } else {
            cout << "Correct answer! :-)" << endl;
            break;
        }

        //check if guess is too high
        if (guess > 20) {
            cout << "Remember the range 1-20!" << endl;
        }

    }   while (true);

    return 0;
}
