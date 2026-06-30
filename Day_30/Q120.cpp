//Write a program to Develop complete mini project using arrays, strings and functions. 
#include <iostream>
#include <string>
using namespace std;

const int MAX = 50;

string names[MAX];
int marks[MAX];
int total = 0;

void addStudent(){
    cout << "Enter student name : ";
    cin.ignore();
    getline(cin, names[total]);

    cout << "Enter marks (0-100): ";
    cin >> marks[total];

    total++;
    cout << "Student added!\n";
}

void displayStudents(){
    if (total == 0) {
        cout << "No students added yet.\n";
        return;
    }

    cout << "\nName\t\tMarks\tGrade\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < total; i++){
        char grade;
        if (marks[i] >= 90) grade = 'A';
        else if (marks[i] >= 75) grade = 'B';
        else if (marks[i] >= 60) grade = 'C';
        else if (marks[i] >= 40) grade = 'D';
        else grade = 'F';

        cout << names[i] << "\t\t" << marks[i] << "\t" << grade << "\n";
    }
}

void findTopper(){
    if (total == 0){
        cout << "No students added yet.\n";
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < total; i++){
        if (marks[i] > marks[maxIndex]){
            maxIndex = i;
        }
    }

    cout << "Topper: " << names[maxIndex] << " with " << marks[maxIndex] << " marks!\n";
}

void searchStudent(){
    string name;
    cout << "Enter name to search: ";
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < total; i++){
        if (names[i] == name) {
            cout << "Found! " << names[i] << " scored " << marks[i] << " marks.\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

void averageMarks() {
    if (total == 0) {
        cout << "No students added yet.\n";
        return;
    }

    int sum = 0;
    for (int i = 0; i < total; i++){
        sum += marks[i];
    }

    float avg = (float)sum / total;
    cout << "Average marks: " << avg << "\n";
}

int main(){
    int choice;

    do{
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Find Topper\n";
        cout << "4. Search Student\n";
        cout << "5. Average Marks\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice){
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: findTopper(); break;
            case 4: searchStudent(); break;
            case 5: averageMarks(); break;
            case 6: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}