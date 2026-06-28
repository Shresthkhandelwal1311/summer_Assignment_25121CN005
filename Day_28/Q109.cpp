//Write a program to Create library management system. 
#include <iostream>
#include <string>
using namespace std;
const int MAX = 100;

struct Book{
    int id;
    string title, author;
    bool available = true;
};

struct Member{
    int id;
    string name;
};

Book   books[MAX];
Member members[MAX];
int bookCount = 0, memberCount = 0;

void addBook(){
    Book& b = books[bookCount];
    b.id = bookCount + 1;
    cout << "Title: ";  cin.ignore(); getline(cin, b.title);
    cout << "Author: "; getline(cin, b.author);
    b.available = true;
    bookCount++;
    cout << "Book added! ID: " << b.id << "\n";
}

void viewBooks(){
    if (bookCount == 0) { cout << "No books found.\n"; return; }
    cout << "\n--- Books ---\n";
    for (int i = 0; i < bookCount; i++)
        cout << books[i].id << ". " << books[i].title
             << " by " << books[i].author
             << " [" << (books[i].available ? "Available" : "Borrowed") << "]\n";
}

void addMember(){
    Member& m = members[memberCount];
    m.id = memberCount + 1;
    cout << "Name: "; cin.ignore(); getline(cin, m.name);
    memberCount++;
    cout << "Member added! ID: " << m.id << "\n";
}

void viewMembers(){
    if (memberCount == 0) { cout << "No members found.\n"; return; }
    cout << "\n--- Members ---\n";
    for (int i = 0; i < memberCount; i++)
        cout << members[i].id << ". " << members[i].name << "\n";
}

void borrowBook(){
    int bid;
    cout << "Book ID: "; cin >> bid;
    for (int i = 0; i < bookCount; i++){
        if (books[i].id == bid) {
            if (!books[i].available) { cout << "Not available!\n"; return; }
            books[i].available = false;
            cout << "Book borrowed!\n";
            return;
        }
    }
    cout << "Book not found!\n";
}

void returnBook(){
    int bid;
    cout << "Book ID: "; cin >> bid;
    for (int i = 0; i < bookCount; i++){
        if (books[i].id == bid){
            books[i].available = true;
            cout << "Book returned!\n";
            return;
        }
    }
    cout << "Book not found!\n";
}

int main(){
    int choice;
    do{
        cout << "\n=== Library Menu ===\n"
             << "1. Add Book\n"
             << "2. View Books\n"
             << "3. Add Member\n"
             << "4. View Members\n"
             << "5. Borrow Book\n"
             << "6. Return Book\n"
             << "0. Exit\n"
             << "Choice: ";
        cin >> choice;

        switch (choice){
            case 1: addBook();     break;
            case 2: viewBooks();   break;
            case 3: addMember();   break;
            case 4: viewMembers(); break;
            case 5: borrowBook();  break;
            case 6: returnBook();  break;
        }
    } while (choice != 0);
}