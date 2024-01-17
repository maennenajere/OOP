/*
 * Create a program that asks the player to guess a random number between 1 and n.
 * The player is helped by being told whether his guess is less than, greater than, or equal to the number
 * he is looking for.
 * When the guess is equal to the number, the game ends.
 *
 * Additional task 3: Modify the function you have implemented so that the function is given the highest number to search for as a parameter, from which the function draws a random number.
 * For example, if this number is 40, then the function will draw a number between 1-40. Also count how many guesses the player made and return this information from the function as a return value.
 * At the end of the game, print the number of guesses on the screen using the return value from the main function.
 * Use as function name and prototype: int game(int maxnum);
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int game(int maxnum) {

    //variables
    int num, guess, guesses = 0;

    //numbergenerator
    srand(time(NULL));

    //target
    num = rand() % maxnum + 1;

    //repeat until number correct
    do {
        //get guess
        cout << "Guess the number between 1-" << maxnum << ": ";
        cin >> guess;

        //check user guess
        if (guess > num) {
            cout << "The number is lower! Try again." << endl;
        } else if (guess < num) {
            cout << "The number is higher! Try again." << endl;
        } else {
            cout << "Correct answer! :-)" << endl;
            break;
        }

        //check guess in range
        if (guess > maxnum) {
            cout << "Remember the range 1-" << maxnum << "!" << endl;
        }

        //guesses count
        guesses++;
    } while (true);

    //return guesses
    return guesses;
}

int main() {
    //set maxNumber
    int maxNumber;
    cout << "Enter the maximum number: ";
    cin >> maxNumber;

    //call function
    int totalGuesses = game(maxNumber);

    //display total guesses
    cout << "Total guesses: " << totalGuesses << endl;

    return 0;
}
