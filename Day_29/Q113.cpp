//Write a program to Create menu-driven calculator.
#include <iostream>
using namespace std;
int main(){
    int choice;
    double num1, num2, result;
    char again = 'y';

    while (again == 'y' || again == 'Y'){
        cout << "\n===== MENU-DRIVEN CALCULATOR =====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Modulus (%) [integers only]\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 6){
            cout << "Exiting calculator. Goodbye!\n";
            break;
        }

        if (choice < 1 || choice > 6){
            cout << "Invalid choice! Please try again.\n";
            continue;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice){
            case 1:
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;

            case 2:
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;

            case 3:
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;

            case 4:
                if (num2 == 0){
                    cout << "Error: Division by zero is not allowed!\n";
                } else{
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;

            case 5:
                if ((int)num2 == 0){
                    cout << "Error: Modulus by zero is not allowed!\n";
                } else{
                    int r = (int)num1 % (int)num2;
                    cout << "Result: " << (int)num1 << " % " << (int)num2 << " = " << r << endl;
                }
                break;
        }

        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> again;
    }

    return 0;
} 