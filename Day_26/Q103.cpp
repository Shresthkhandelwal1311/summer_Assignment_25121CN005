//Write a program to Create ATM simulation.
#include <iostream>
using namespace std;
int main(){
    double balance = 1000;  // starting balance
    int choice;
    double amount;
    cout << "=== WELCOME TO ATM ===" << endl;
    // keep showing menu until user picks 3 (exit)
    while(true){

        // show menu
        cout << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cout << endl;

        if(choice == 1){
            cout << "Your balance is: $" << balance << endl;
        }else if (choice == 2){
            cout << "How much to deposit? $";
            cin >> amount;
            balance = balance + amount;
            cout << "Done! New balance: $" << balance << endl;

        } else if(choice == 3){
            cout << "How much to withdraw? $";
            cin >> amount;
            if(amount > balance){
                cout << "Not enough money!" << endl;
            } else{
                balance = balance - amount;
                cout << "Done! Remaining balance: $" << balance << endl;
            }
        } else if(choice == 4){
            cout << "Thank you! Goodbye!" << endl;
            break;  // exit the loop
        } else{
            cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}
