// Adi Van Wye Coding 1 Spring 2026
// Switch, random numbers, and while Loops.

// your task..... create the rest of the code to say "Random Numbers!"
// then run the program.

#include <iostream>         // in-out stream, for sending text to the console.}
#include <random>             // for random numbers
#include <ctime>            // for seeding random numbers.

using namespace std;       // so we don't have to type "std":: all the time
 
int main () {
    srand(time(0));        // seed the random number generator wth the current time.
    cout << "Random Numbers!\n";

      cout << "Our first random number is " << rand() << ".\n";

      cout << "here are ten random numbers:\n";

        int counter = 0;
        while(counter++ < 10) {
            cout << (rand() % 10) + 1 << endl;
        }
        
        // guess the number game
        do {}
        // the computer picks a random number between 1 and 10 (inclusive)
        int theNumber = (rand() % 10) + 1;
        // the computer asks the eplayer to guess that random number.
        int guess = -1;
        { do
        // the player guesses
        cin >> guess;
        // the computer evaluates whether the guess is
            // correct!
            if(theNumber == guess if) ;{
                // Congratulate the player, end game
                cout<< "You guessed it!\n";
                return 0;
                }
            // too high
            else if(guess > theNumber) {
                // tell the player "too high!"
                cout << "That guess is too high!\n";
                }
            // too low
                // tell the player "too low!"
                cout << "that guess is too low!\n";
            }    
        // Let the player guess again , if it was incorrect
        }while(guess !=theNumber);

            
        return 0;
}

