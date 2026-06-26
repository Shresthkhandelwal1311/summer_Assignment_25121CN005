//Write a program to Create number guessing game.
#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;
int main(){

    // --- Setup ---
    srand(time(0));              // seed random number using current time
    int secretNumber = rand() % 100 + 1;  // random number between 1 and 100
    int guess        = 0;
    int tries        = 0;

    // --- Welcome Message ---
    cout << "==============================" << endl;
    cout << "   NUMBER GUESSING GAME  " << endl;
    cout << "==============================" << endl;
    cout << "I picked a number between 1 and 100." << endl;
    cout << "Can you guess it? Good luck!" << endl;
    cout << endl;

    // --- Game Loop ---
    while(guess != secretNumber){
        cout << "Enter your guess: ";
        cin  >> guess;
        tries++;
        if(guess < 1 || guess > 100){
            cout << "Please enter a number between 1 and 100!" << endl;
            tries--;   // don't count invalid input as a try

        }else if(guess < secretNumber){
            cout << "Too LOW!  Try a bigger number." << endl;

        }else if(guess > secretNumber){
            cout << "Too HIGH! Try a smaller number." << endl;

        } else{
            // guess == secretNumber
            cout << endl;
            cout << "*** Correct! The number was " << secretNumber << " ***" << endl;
            cout << "You got it in " << tries << " tries!" << endl;

            // Fun rating based on number of tries
            if     (tries <= 3)  cout << "Amazing! You're a mind reader!" << endl;
            else if(tries <= 7)  cout << "Great job! Well done!" << endl;
            else if(tries <= 10) cout << "Good effort! Keep practicing!" << endl;
            else                  cout << "You got there in the end! Keep it up!" << endl;
        }
        cout << endl;
    }
    cout << "Thanks for playing! Goodbye!" << endl;
    return 0;
} 