  /* 1.The class constructor prints the maximum value given by the user
   * 2. The play method prints out the interval to be guessed when the game is played and whether or not the guess is a hit or miss.
   * 3. printGameResult method prints a summary, i.e. what was the correct answer and how many guesses were needed
   * (hint: the play method must call the printGameResult method)
   * 4. And finally, when the Game object is destroyed, the destructor message is printed.
*/

#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// constructor
Game::Game(int max) : maxNumber(max), playerGuess(0), randomNumber(0), numOfGuesses(0) {
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
}


// destructor
Game::~Game() {
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

// gameplay
void Game::play() {
    bool stayInLoop = true;

    while (stayInLoop) {
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess == randomNumber) {
            cout << "Your guess is right = " << playerGuess << endl;
            stayInLoop = false;
        } else if (playerGuess < randomNumber) {
            cout << "Your guess is too small" << endl;
        } else {
            cout << "Your guess is too big" << endl;
        }
    }

    printGameResult();
}

// print gameresults
void Game::printGameResult() {
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}

