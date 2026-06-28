//Write a program to Create contact management system.
//Write a program to Create contact management system.
#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;
string names[MAX], phones[MAX], emails[MAX], addresses[MAX];
int total = 0;

void viewAll(){
    if (total == 0) { cout << "\nNo contacts!\n"; return; }
    cout << "\n--- Contacts (" << total << ") ---\n";
    for (int i = 0; i < total; i++)
        cout << i+1 << ". " << names[i] << " | " << phones[i] << " | " << emails[i] << " | " << addresses[i] << "\n";
}

void addContact(){
    if (total >= MAX) { cout << "Contact list full!\n"; return; }
    cin.ignore();
    cout << "Name    : "; getline(cin, names[total]);
    cout << "Phone   : "; getline(cin, phones[total]);
    cout << "Email   : "; getline(cin, emails[total]);
    cout << "Address : "; getline(cin, addresses[total]);
    total++;
    cout << "Contact added!\n";
}

void searchContact(){
    cin.ignore();
    string key;
    cout << "Enter name to search: "; getline(cin, key);
    bool found = false;
    for (int i = 0; i < total; i++){
        if (names[i].find(key) != string::npos){
            cout << i+1 << ". " << names[i] << " | " << phones[i] << " | " << emails[i] << " | " << addresses[i] << "\n";
            found = true;
        }
    }
    if (!found) cout << "Not found!\n";
}

void editContact(){
    viewAll();
    int n;
    cout << "Enter sr.no. to edit: "; cin >> n; n--;
    if (n < 0 || n >= total) { cout << "Invalid!\n"; return; }
    cin.ignore();
    cout << "New Name    [" << names[n]     << "]: "; getline(cin, names[n]);
    cout << "New Phone   [" << phones[n]    << "]: "; getline(cin, phones[n]);
    cout << "New Email   [" << emails[n]    << "]: "; getline(cin, emails[n]);
    cout << "New Address [" << addresses[n] << "]: "; getline(cin, addresses[n]);
    cout << "Updated!\n";
}

void deleteAllDetails(){
    viewAll();
    cin.ignore();                                
    int n;
    cout << "Enter sr.no. to clear details: "; cin >> n; n--;
    if (n < 0 || n >= total) { cout << "Invalid!\n"; return; }

    cout << "Clear ALL details of \"" << names[n] << "\"? (y/n): ";
    char ch; cin >> ch;
    if (ch == 'y' || ch == 'Y'){
        names[n] = phones[n] = emails[n] = addresses[n] = "";
        cout << "All details cleared!\n";
    } else{
        cout << "Cancelled.\n";
    }
}

int main(){
    int ch;
    do{
        cout << "\n1. Add\n2. View All\n3. Search\n4. Edit\n5. Delete All Details\n0. Exit\nChoice: ";
        cin >> ch;
        if      (ch == 1) addContact();
        else if (ch == 2) viewAll();
        else if (ch == 3) searchContact();
        else if (ch == 4) editContact();
        else if (ch == 5) deleteAllDetails();
    } while (ch != 0);
}