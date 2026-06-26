//Write a program to Create voting eligibility system. 
#include <iostream>
#include <string>
using namespace std;
int main(){

    // --- Variables to store user information ---
    string name;
    int age;
    string citizen;   // "yes" or "no"
    string registered; // "yes" or "no"

    // --- Welcome Message ---
    cout << "==============================" << endl;
    cout << "   VOTING ELIGIBILITY SYSTEM  " << endl;
    cout << "==============================" << endl;
    cout << endl;

    // --- Step 1: Ask for name ---
    cout << "Enter your name: ";
    cin  >> name;
    cout << endl;

    // --- Step 2: Ask for age ---
    cout << "Hello, " << name << "!" << endl;
    cout << "Enter your age: ";
    cin  >> age;
    cout << endl;

    // --- Step 3: Ask if they are a citizen ---
    cout << "Are you a citizen of this country? (yes / no): ";
    cin  >> citizen;
    cout << endl;

    // --- Step 4: Ask if they are registered ---
    cout << "Are you registered to vote? (yes / no): ";
    cin  >> registered;
    cout << endl;

    // --- Check Eligibility ---
    cout << "------------------------------" << endl;
    cout << "       CHECKING RESULTS...    " << endl;
    cout << "------------------------------" << endl;
    cout << endl;

    // Rule 1: Must be 18 or older
    if (age < 18) {
        cout << "Sorry, " << name << "!" << endl;
        cout << "You are NOT eligible to vote." << endl;
        cout << "Reason: You must be at least 18 years old." << endl;
        cout << "You need " << (18 - age) << " more year(s) to be eligible." << endl;
    }

    // Rule 2: Must be a citizen
    else if (citizen == "no" || citizen == "No" || citizen == "NO") {
        cout << "Sorry, " << name << "!" << endl;
        cout << "You are NOT eligible to vote." << endl;
        cout << "Reason: You must be a citizen of this country." << endl;
    }

    // Rule 3: Must be registered
    else if (registered == "no" || registered == "No" || registered == "NO") {
        cout << "Sorry, " << name << "!" << endl;
        cout << "You are NOT eligible to vote YET." << endl;
        cout << "Reason: You are not registered to vote." << endl;
        cout << "Tip: Please register at your nearest election office!" << endl;
    }

    // All rules passed — eligible!
    else {
        cout << "Congratulations, " << name << "!" << endl;
        cout << "You ARE eligible to vote!" << endl;
        cout << "Please go and cast your vote. Every vote matters!" << endl;
    }

    cout << endl;
    cout << "==============================" << endl;
    cout << "      Thank you! Goodbye!     " << endl;
    cout << "==============================" << endl;

    return 0;
}