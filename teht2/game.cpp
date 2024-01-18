  /*  1. Luokan konstruktori tulostaa maksimiarvon jonka käyttäjä antoi
    2. Play metodi tulostaa peliä pelattaessa mille välille arvaus pitää antaa sekä arvauksen jälkeen osuiko vaiko eikö.
    3. printGameResult metodi tulostaa yhteenvedon eli mikä oli oikea vastaus ja kuinka monta arvausta siihen tarviitiin (vihje: play metodin täytyy kutsua printGameResult metodia)
    4. Ja lopuksi, kun Game objekti tuhotaan tulostuu destruktorin viesti.*/


#include "game.h"
#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

Game::Game(int) {
    /*int game(int maxnum) {

        //variables
        int num, guess, guesses = 0;
    */
    //numbergenerator
    srand(time(NULL));

    //target
    randomNumber = rand() % maxNumber + 1;


}

void Game::Game() {
    //get guess
    cout << "Guess the number between 1-" << maxNumber << ": ";
    cin >> playerGuess;
}


void Game::printGameResult() {
    cout << "Your quess is right = "<< randomNumber << endl;
    cout << "You quessed the right answer = "<< randomNumber << ". with " << numOfGuesses << " quesses" << endl;
}


/*  do {
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

        //guesses count
        guesses++;
    } while (true);

    //set maxNumber
    cout << "Enter the maximum number: ";
    cin >> maxNumber; */

void Game::play() {

    /*cout << "Numero: ";
    cin >> playerGuess;
    numOfGuesses++;*/



    if (playerGuess == randomNumber) {
        printGameResult();
        return;

    } else if (playerGuess > randomNumber) {
        cout << "Your guess is too big" << endl;
        playerGuess();
        return;

    } else {
        cout << "Your guess is too small" << endl;
    }

    void Game::~Game() {
        cout << "GAME DESTRUCTOR: Object cleared from stack memory" << endl;
        printGameResult();
    }
}

