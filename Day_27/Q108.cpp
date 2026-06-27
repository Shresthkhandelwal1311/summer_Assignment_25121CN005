//Write a program to Create marksheet generation system.
#include <iostream>
using namespace std;
int main(){
    // Step 1: Take student details
    string name;
    int rollNo;

    cout << "===== MARKSHEET GENERATION SYSTEM =====" << endl;
    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    // Step 2: Take marks for 5 subjects (out of 100 each)
    int marks[5];
    string subjects[5] = {"Math", "Science", "English", "History", "Computer"};

    cout << "\nEnter marks (out of 100) for the following subjects:" << endl;
    for (int i = 0; i < 5; i++){
        cout << subjects[i] << ": ";
        cin >> marks[i];
    }

    // Step 3: Calculate total and percentage
    int total = 0;
    for (int i = 0; i < 5; i++){
        total = total + marks[i];
    }

    float percentage = (float)total / 5;  // 5 subjects, 100 marks each = 500 total

    // Step 4: Decide the grade based on percentage
    char grade;
    if (percentage >= 90){
        grade = 'A';
    } else if (percentage >= 75){
        grade = 'B';
    } else if (percentage >= 60){
        grade = 'C';
    } else if (percentage >= 40){
        grade = 'D';
    } else{
        grade = 'F';
    }

    // Step 5: Check pass or fail (fail if any subject < 40)
    bool isPass = true;
    for (int i = 0; i < 5; i++){
        if (marks[i] < 40){
            isPass = false;
        }
    }

    // Step 6: Print the final marksheet
    cout << "\n========================================" << endl;
    cout << "              MARKSHEET                " << endl;
    cout << "========================================" << endl;
    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << rollNo << endl;
    cout << "----------------------------------------" << endl;
    cout << "Subject\t\tMarks Obtained" << endl;
    cout << "----------------------------------------" << endl;

    for (int i = 0; i < 5; i++){
        cout << subjects[i] << "\t\t" << marks[i] << "/100" << endl;
    }

    cout << "----------------------------------------" << endl;
    cout << "Total      : " << total << " / 500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade      : " << grade << endl;
    cout << "Result     : " << (isPass ? "PASS" : "FAIL") << endl;
    cout << "========================================" << endl;

    return 0;
}