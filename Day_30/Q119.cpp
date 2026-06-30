//Write a program to Create mini employee management system. 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Employee{
    int id;
    string name;
    string position;
    string department;
    float salary;
};

Employee employees[100];
int count = 0;

void addEmployee(){
    if (count >= 100){
        cout << "Storage full!\n";
        return;
    }

    Employee e;
    e.id = count + 1;

    cout << "Enter Name       : ";
    cin.ignore();
    getline(cin, e.name);
    cout << "Enter Position   : ";
    getline(cin, e.position);
    cout << "Enter Department : ";
    getline(cin, e.department);
    cout << "Enter Salary     : ";
    cin >> e.salary;

    employees[count] = e;
    count++;

    cout << "Employee added! (ID = " << e.id << ")\n";
}

void showAll(){
    if (count == 0){
        cout << "No employees found.\n";
        return;
    }

    cout << "\n" << left
         << setw(5)  << "ID"
         << setw(20) << "Name"
         << setw(18) << "Position"
         << setw(15) << "Department"
         << setw(10) << "Salary" << "\n";
    cout << string(68, '-') << "\n";

    for (int i = 0; i < count; i++){
        cout << left
             << setw(5)  << employees[i].id
             << setw(20) << employees[i].name
             << setw(18) << employees[i].position
             << setw(15) << employees[i].department
             << setw(10) << employees[i].salary << "\n";
    }
}

void searchEmployee(){
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++){
        if (employees[i].id == id){
            cout << "Name       : " << employees[i].name << "\n";
            cout << "Position   : " << employees[i].position << "\n";
            cout << "Department : " << employees[i].department << "\n";
            cout << "Salary     : " << employees[i].salary << "\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

void deleteEmployee(){
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++){
        if (employees[i].id == id) {
            for (int j = i; j < count - 1; j++){
                employees[j] = employees[j + 1];
            }
            count--;
            cout << "Employee deleted!\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

int main(){
    int choice;

    do{
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Show All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice){
            case 1: addEmployee(); break;
            case 2: showAll(); break;
            case 3: searchEmployee(); break;
            case 4: deleteEmployee(); break;
            case 5: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}