//Write a program to Create mini library system.
#include <iostream>
#include <string>
using namespace std;

const int MAX_BOOKS = 100;

struct Book{
    int id;
    string title;
    string author;
    bool isIssued;
};

Book library[MAX_BOOKS];
int bookCount = 0;
int nextId = 1;

void addBook(){
    if (bookCount >= MAX_BOOKS){
        cout << "Library is full!\n";
        return;
    }
    Book b;
    b.id = nextId++;
    cout << "Enter title: ";
    cin.ignore();
    getline(cin, b.title);
    cout << "Enter author: ";
    getline(cin, b.author);
    b.isIssued = false;

    library[bookCount] = b;
    bookCount++;
    cout << "Book added successfully! (ID: " << b.id << ")\n";
}

void displayBooks(){
    if (bookCount == 0) {
        cout << "No books in library.\n";
        return;
    }
    cout << "\n--- Library Books ---\n";
    for (int i = 0; i < bookCount; i++){
        cout << "ID: " << library[i].id
             << " | Title: " << library[i].title
             << " | Author: " << library[i].author
             << " | Status: " << (library[i].isIssued ? "Issued" : "Available")
             << endl;
    }
}

void issueBook(){
    int id;
    cout << "Enter book ID to issue: ";
    cin >> id;
    for (int i = 0; i < bookCount; i++){
        if (library[i].id == id) {
            if (library[i].isIssued){
                cout << "Book already issued.\n";
            } else{
                library[i].isIssued = true;
                cout << "Book issued successfully.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

void returnBook(){
    int id;
    cout << "Enter book ID to return: ";
    cin >> id;
    for (int i = 0; i < bookCount; i++){
        if (library[i].id == id){
            if (!library[i].isIssued){
                cout << "Book was not issued.\n";
            } else{
                library[i].isIssued = false;
                cout << "Book returned successfully.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

void searchBook(){
    string keyword;
    cout << "Enter title or author to search: ";
    cin.ignore();
    getline(cin, keyword);
    bool found = false;
    for (int i = 0; i < bookCount; i++){
        if (library[i].title.find(keyword) != string::npos ||
            library[i].author.find(keyword) != string::npos){
            cout << "ID: " << library[i].id
                 << " | Title: " << library[i].title
                 << " | Author: " << library[i].author
                 << " | Status: " << (library[i].isIssued ? "Issued" : "Available")
                 << endl;
            found = true;
        }
    }
    if (!found) cout << "No matching book found.\n";
}

int main(){
    int choice;
    do{
        cout << "\n===== Mini Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice){
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: issueBook(); break;
            case 4: returnBook(); break;
            case 5: searchBook(); break;
            case 6: cout << "Exiting... Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
} 