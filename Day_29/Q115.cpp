//Write a program to Create menu-driven string operations system.
#include <iostream>
using namespace std;
int main(){
    string str;
    int choice;
    char again = 'y';

    cout << "Enter a string: ";
    getline(cin, str);

    while (again == 'y' || again == 'Y'){
        cout << "\n----- STRING OPERATIONS MENU -----" << endl;
        cout << "1. Display string" << endl;
        cout << "2. Find length" << endl;
        cout << "3. Convert to uppercase" << endl;
        cout << "4. Convert to lowercase" << endl;
        cout << "5. Reverse the string" << endl;
        cout << "6. Count vowels" << endl;
        cout << "7. Check palindrome" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice (1-8): ";
        cin >> choice;

        if (choice == 1){
            cout << "String: " << str << endl;
        }
        else if (choice == 2){
            cout << "Length = " << str.length() << endl;
        }
        else if (choice == 3){
            string temp = str;
            for (int i = 0; i < temp.length(); i++){
                if (temp[i] >= 'a' && temp[i] <= 'z'){
                    temp[i] = temp[i] - 32;
                }
            }
            cout << "Uppercase: " << temp << endl;
        }
        else if (choice == 4){
            string temp = str;
            for (int i = 0; i < temp.length(); i++){
                if (temp[i] >= 'A' && temp[i] <= 'Z'){
                    temp[i] = temp[i] + 32;
                }
            }
            cout << "Lowercase: " << temp << endl;
        }
        else if (choice == 5){
            string temp = str;
            int n = temp.length();
            for (int i = 0; i < n / 2; i++){
                char t = temp[i];
                temp[i] = temp[n - 1 - i];
                temp[n - 1 - i] = t;
            }
            cout << "Reversed: " << temp << endl;
        }
        else if (choice == 6){
            int count = 0;
            for (int i = 0; i < str.length(); i++){
                char c = str[i];
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                    count++;
                }
            }
            cout << "Number of vowels = " << count << endl;
        }
        else if (choice == 7){
            string temp = str;
            int n = temp.length();
            bool isPalindrome = true;
            for (int i = 0; i < n / 2; i++){
                if (temp[i] != temp[n - 1 - i]){
                    isPalindrome = false;
                    break;
                }
            }
            if (isPalindrome){
                cout << "The string IS a palindrome." << endl;
            } else {
                cout << "The string is NOT a palindrome." << endl;
            }
        }
        else if (choice == 8){
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }
        else{
            cout << "Invalid choice! Try again." << endl;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> again;
    }

    return 0;
} 