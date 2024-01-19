/*
 *Implement the guessing game from the teht1, now using OOP.
 *Make a class "Game" as shown in the figure below,
 *where the class constructor is given a maximum number between which 1-maxNumber is drawn by the game.
 *
 *The game should work as shown in the picture below.
 *That is, in the main.cpp file only the commands shown in the picture
 *and the game should print the texts shown in the command window in the picture below:
 *
 *  1. The class constructor prints the maximum value given by the user.
 *  2. The play method prints out the interval to be guessed when the game is played and whether or not the guess is correct.
 *  3. printGameResult method prints a summary, i.e. what was the correct answer and how many guesses were needed (hint: the play method must call the printGameResult method).
 *  4. And finally, when the Game object is destroyed the destructor message is printed.
 *
*/

#include "Game.h"

using namespace std;

int main()
{
    Game gameObject(10);
    gameObject.play();
    return 0;
}
