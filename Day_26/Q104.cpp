//Write a program to Create quiz application. 
#include <iostream>
using namespace std;
int main(){
    int answer;
    int score = 0;
    cout << "=== QUIZ APP ===" << endl;
    cout << endl;

    // Q1
    cout << "Q1: What is 6 + 2?" << endl;
    cout << "1. 3   2. 4   3. 5   4. 8" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 4) { cout << "Correct!" << endl; score++; }
    else             { cout << "Wrong! Answer is 4 (8)" << endl; }
    cout << endl;

    // Q2
    cout << "Q2: What is the colour of Orange?" << endl;
    cout << "1. Green   2. Red   3. Orange   4. Yellow" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 3) { cout << "Correct!" << endl; score++; }
    else             { cout << "Wrong! Answer is 3 (Orange)" << endl; }
    cout << endl;

    // Q3
    cout << "Q3: How many days are there in a Leap year?" << endl;
    cout << "1. 365  2. 367   3.364   4. 366" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 4) { cout << "Correct!" << endl; score++; }
    else             { cout << "Wrong! Answer is 4 (366)" << endl; }
    cout << endl;

    // Q4
    cout << "Q4: What is the jersey number of Virat Kohli?" << endl;
    cout << "1. 18   2. 45   3. 7   4. 17" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 1) { cout << "Correct!" << endl; score++; }
    else             { cout << "Wrong! Answer is 1 (18)" << endl; }
    cout << endl;

    // Q5
    cout << "Q5: What is the capital of France?" << endl;
    cout << "1. Rome   2. Berlin   3. Madrid   4. Paris" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 4) { cout << "Correct!" << endl; score++; }
    else             { cout << "Wrong! Answer is 4 (Paris)" << endl; }
    cout << endl;

    // Result
    cout << "=== RESULT ===" << endl;
    cout << "Your score: " << score << " / 5" << endl;

    if      (score == 5) cout << "Perfect! Amazing!" << endl;
    else if (score >= 3) cout << "Good job! You passed!" << endl;
    else                 cout << "Keep practicing! Try again!" << endl;

    return 0;
}