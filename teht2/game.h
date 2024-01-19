#ifndef GAME_H
#define GAME_H

class Game {

private:
    int maxNumber, playerGuess, randomNumber, numOfGuesses;

public:
    Game(int max);          // constructor
    ~Game();                // destructor

    void play();            // method to play the game
    void printGameResult(); // method to print gameresults
};

#endif
