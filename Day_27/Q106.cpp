//Write a program to Create employee management system.
#include <iostream>
#include <string>
using namespace std;

// ── Employee data ──────────────────────────────────
struct Employee{
    int    id;
    string name;
    string department;
    float  salary;
};

// ── Global storage (up to 100 employees) ───────────
Employee employees[100];
int count = 0;

// ─────────────────────────────────────────────────
// 1. Add a new employee
// ─────────────────────────────────────────────────
void addEmployee(){
    if (count >= 100){
        cout << "Storage full!\n";
        return;
    }

    Employee e;
    e.id = count + 1;            // auto ID

    cout << "\nEnter Name     : ";
    cin.ignore(); 
    getline(cin, e.name);
    cout << "Enter Department : ";                 
    getline(cin, e.department);
    cout << "Enter Salary     : "; 
    cin >> e.salary;

    employees[count] = e;
    count++;

    cout << "\nEmployee added! (ID = " << e.id << ")\n";
}

// ─────────────────────────────────────────────────
// 2. Show all employees
// ─────────────────────────────────────────────────
void showAll(){
    if (count == 0) {
        cout << "\nNo employees found.\n";
        return;
    }

    cout << "\n------------------------------------------\n";
    cout << "ID\tName\t\tDepartment\tSalary\n";
    cout << "------------------------------------------\n";

    for (int i = 0; i < count; i++) {
        cout << employees[i].id         << "\t"
             << employees[i].name       << "\t\t"
             << employees[i].department << "\t\t"
             << employees[i].salary     << "\n";
    }

    cout << "------------------------------------------\n";
    cout << "Total employees: " << count << "\n";
}

// ─────────────────────────────────────────────────
// 3. Search by ID
// ─────────────────────────────────────────────────
void searchEmployee(){
    int id;
    cout << "\nEnter ID to search: "; cin >> id;

    for (int i = 0; i < count; i++){
        if (employees[i].id == id){
            cout << "\nFound!\n";
            cout << "ID         : " << employees[i].id         << "\n";
            cout << "Name       : " << employees[i].name       << "\n";
            cout << "Department : " << employees[i].department << "\n";
            cout << "Salary     : " << employees[i].salary     << "\n";
            return;
        }
    }
    cout << "Employee with ID " << id << " not found.\n";
}

// ─────────────────────────────────────────────────
// 4. Update employee
// ─────────────────────────────────────────────────
void updateEmployee(){
    int id;
    cout << "\nEnter ID to update: "; cin >> id;

    for (int i = 0; i < count; i++){
        if (employees[i].id == id){
            cout << "Enter new Name       : "; 
            cin.ignore(); 
            getline(cin, employees[i].name);
            cout << "Enter new Department : ";               
            getline(cin, employees[i].department);
            cout << "Enter new Salary     : "; 
            cin >> employees[i].salary;
            cout << "Record updated!\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

// ─────────────────────────────────────────────────
// 5. Delete employee
// ─────────────────────────────────────────────────
void deleteEmployee(){
    int id;
    cout << "\nEnter ID to delete: "; cin >> id;

    for (int i = 0; i < count; i++){
        if (employees[i].id == id) {
            // Shift remaining records left
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

// ─────────────────────────────────────────────────
// Main menu
// ─────────────────────────────────────────────────
int main(){
    int choice;

    do{
        cout << "\n==============================\n";
        cout << " EMPLOYEE MANAGEMENT SYSTEM\n";
        cout << "==============================\n";
        cout << "1. Add Employee\n";
        cout << "2. Show All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "0. Exit\n";
        cout << "------------------------------\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice){
            case 1: addEmployee();    break;
            case 2: showAll();        break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: deleteEmployee(); break;
            case 0: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
} 