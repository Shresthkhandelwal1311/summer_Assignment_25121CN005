//Write a program to Create salary management system.
#include <iostream>
using namespace std;
int main(){
    
    int id[100];
    string name[100];
    double basic[100], allowance[100], deduction[100];
    int count = 0;   // how many employees added so far
    int choice;

    do{
        // Show menu
        cout << "\n===== SALARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Show All Employees\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1){
            cout << "\nEnter ID: ";
            cin >> id[count];

            cout << "Enter Name: ";
            cin >> name[count];

            cout << "Enter Basic Salary: ";
            cin >> basic[count];

            cout << "Enter Allowance: ";
            cin >> allowance[count];

            cout << "Enter Deduction: ";
            cin >> deduction[count];

            count++;  // move to next empty slot
            cout << "Employee added!\n";
        }
        else if (choice == 2){
            if (count == 0) {
                cout << "\nNo employees added yet.\n";
            } else{
                cout << "\nID\tName\tBasic\tAllowance\tDeduction\tNet Salary\n";
                for (int i = 0; i < count; i++) {
                    double net = basic[i] + allowance[i] - deduction[i];
                    cout << id[i] << "\t" << name[i] << "\t" << basic[i]
                         << "\t" << allowance[i] << "\t\t" << deduction[i]
                         << "\t\t" << net << endl;
                }
            }
        }
        else if (choice == 3){
            cout << "\nExiting program. Goodbye!\n";
        }
        else{
            cout << "\nInvalid choice, try again.\n";
        }

    } while (choice != 3);

    return 0;
} 