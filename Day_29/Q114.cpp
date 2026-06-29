//Write a program to Create menu-driven array operations system. 
#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    int choice;
    char again = 'y';

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    while (again == 'y' || again == 'Y'){
        cout << "\n----- ARRAY OPERATIONS MENU -----" << endl;
        cout << "1. Display array" << endl;
        cout << "2. Find sum of elements" << endl;
        cout << "3. Find maximum element" << endl;
        cout << "4. Find minimum element" << endl;
        cout << "5. Search for an element" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 1){
            cout << "Array elements: ";
            for (int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else if (choice == 2){
            int sum = 0;
            for (int i = 0; i < n; i++){
                sum = sum + arr[i];
            }
            cout << "Sum = " << sum << endl;
        }
        else if (choice == 3){
            int maxVal = arr[0];
            for (int i = 1; i < n; i++){
                if (arr[i] > maxVal){
                    maxVal = arr[i];
                }
            }
            cout << "Maximum element = " << maxVal << endl;
        }
        else if (choice == 4){
            int minVal = arr[0];
            for (int i = 1; i < n; i++){
                if (arr[i] < minVal){
                    minVal = arr[i];
                }
            }
            cout << "Minimum element = " << minVal << endl;
        }
        else if (choice == 5){
            int key, found = 0;
            cout << "Enter element to search: ";
            cin >> key;
            for (int i = 0; i < n; i++){
                if (arr[i] == key){
                    cout << "Element found at position " << (i + 1) << endl;
                    found = 1;
                    break;
                }
            }
            if (found == 0){
                cout << "Element not found." << endl;
            }
        }
        else if (choice == 6){
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