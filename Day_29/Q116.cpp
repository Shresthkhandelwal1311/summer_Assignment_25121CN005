//Write a program to Create inventory management system.
#include <iostream>
#include <iomanip>
using namespace std;

struct Item{
    string name;
    int quantity;
    double price;
};

int main(){
    Item items[100];
    int count = 0;
    int choice;
    char again = 'y';

    while (again == 'y' || again == 'Y'){
        cout << "\n----- INVENTORY MANAGEMENT MENU -----" << endl;
        cout << "1. Add item" << endl;
        cout << "2. Display all items" << endl;
        cout << "3. Search item" << endl;
        cout << "4. Update item quantity" << endl;
        cout << "5. Delete item" << endl;
        cout << "6. Total inventory value" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        if (choice == 1){
            cout << "Enter item name: ";
            cin >> items[count].name;
            cout << "Enter quantity: ";
            cin >> items[count].quantity;
            cout << "Enter price: ";
            cin >> items[count].price;
            count++;
            cout << "Item added successfully!" << endl;
        }
        else if (choice == 2){
            if (count == 0) {
                cout << "No items in inventory." << endl;
            } else {
                cout << "\n" << left << setw(15) << "Name"
                     << setw(15) << "Quantity"
                     << setw(15) << "Price" << endl;
                cout << fixed << setprecision(2);
                for (int i = 0; i < count; i++) {
                    cout << left << setw(15) << items[i].name
                         << setw(15) << items[i].quantity
                         << setw(15) << items[i].price << endl;
                }
                cout.unsetf(ios::fixed);
            }
        }
        else if (choice == 3){
            string searchName;
            cout << "Enter item name to search: ";
            cin >> searchName;
            bool found = false;
            for (int i = 0; i < count; i++){
                if (items[i].name == searchName){
                    cout << fixed << setprecision(2);
                    cout << "Found: " << items[i].name
                         << " | Quantity: " << items[i].quantity
                         << " | Price: " << items[i].price << endl;
                    cout.unsetf(ios::fixed);
                    found = true;
                    break;
                }
            }
            if (!found){
                cout << "Item not found." << endl;
            }
        }
        else if (choice == 4){
            string updateName;
            cout << "Enter item name to update: ";
            cin >> updateName;
            bool found = false;
            for (int i = 0; i < count; i++){
                if (items[i].name == updateName){
                    cout << "Enter new quantity: ";
                    cin >> items[i].quantity;
                    cout << "Quantity updated successfully!" << endl;
                    found = true;
                    break;
                }
            }
            if (!found){
                cout << "Item not found." << endl;
            }
        }
        else if (choice == 5){
            string deleteName;
            cout << "Enter item name to delete: ";
            cin >> deleteName;
            int pos = -1;
            for (int i = 0; i < count; i++){
                if (items[i].name == deleteName){
                    pos = i;
                    break;
                }
            }
            if (pos == -1){
                cout << "Item not found." << endl;
            } else{
                for (int i = pos; i < count - 1; i++){
                    items[i] = items[i + 1];
                }
                count--;
                cout << "Item deleted successfully!" << endl;
            }
        }
        else if (choice == 6){
            double total = 0;
            for (int i = 0; i < count; i++){
                total = total + (items[i].quantity * items[i].price);
            }
            cout << fixed << setprecision(2);
            cout << "Total inventory value = " << total << endl;
            cout.unsetf(ios::fixed);
        }
        else if (choice == 7){
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