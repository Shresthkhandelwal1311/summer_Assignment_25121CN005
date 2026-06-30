//Write a program to Create student record system using arrays and strings.
#include <iostream>
using namespace std;
int main(){
    const int MAX = 50;        // maximum number of students
    string names[MAX];         // array to store student names
    int rollNo[MAX];           // array to store roll numbers
    float sgpa[MAX];           // array to store previous semester SGPA
    string admissionNo[MAX];   // array to store admission numbers
    string contact[MAX];       // array to store contact numbers
    string email[MAX];         // array to store student email id
    string fatherName[MAX];    // array to store father's name
    string address[MAX];       // array to store address
    string guardianName[MAX];  // array to store guardian's name
    string branch[MAX];        // array to store student branch
    string section[MAX];       // array to store student section

    int count = 0;             // total number of students added
    int choice;
    do{
        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Update Student Detail\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1){
            if (count >= MAX){
                cout << "Record list is full!\n";
            } else {
                cout << "Enter Roll No: ";
                cin >> rollNo[count];

                cout << "Enter Admission No: ";
                cin >> admissionNo[count];

                cin.ignore();   
                cout << "Enter Name: ";
                getline(cin, names[count]);  

                cout << "Enter Branch: ";
                cin >> branch[count];

                cout << "Enter Section: ";
                cin >> section[count];

                cout << "Enter Previous Semester SGPA: ";
                cin >> sgpa[count];

                cout << "Enter Contact No: ";
                cin >> contact[count];

                cout << "Enter Email ID: ";
                cin >> email[count];

                cin.ignore();   
                cout << "Enter Father's Name: ";
                getline(cin, fatherName[count]);

                cout << "Enter Address: ";
                getline(cin, address[count]);  

                cout << "Enter Guardian's Name: ";
                getline(cin, guardianName[count]);

                count++;
                cout << "Student added successfully!\n";
            }
        }
        else if (choice == 2){
            if (count == 0){
                cout << "No records to display.\n";
            } else{
                for (int i = 0; i < count; i++){
                    cout << "\n---------------------------\n";
                    cout << "Roll No        : " << rollNo[i] << endl;
                    cout << "Admission No   : " << admissionNo[i] << endl;
                    cout << "Name           : " << names[i] << endl;
                    cout << "Branch         : " << branch[i] << endl;
                    cout << "Section        : " << section[i] << endl;
                    cout << "Previous SGPA  : " << sgpa[i] << endl;
                    cout << "Contact No     : " << contact[i] << endl;
                    cout << "Email ID       : " << email[i] << endl;
                    cout << "Father's Name  : " << fatherName[i] << endl;
                    cout << "Address        : " << address[i] << endl;
                    cout << "Guardian's Name: " << guardianName[i] << endl;
                }
                cout << "---------------------------\n";
            }
        }
        else if (choice == 3){
            int searchRoll;
            cout << "Enter Roll No to search: ";
            cin >> searchRoll;

            bool found = false;
            for (int i = 0; i < count; i++){
                if (rollNo[i] == searchRoll){
                    cout << "Student Found!\n";
                    cout << "Admission No   : " << admissionNo[i] << endl;
                    cout << "Name           : " << names[i] << endl;
                    cout << "Branch         : " << branch[i] << endl;
                    cout << "Section        : " << section[i] << endl;
                    cout << "Previous SGPA  : " << sgpa[i] << endl;
                    cout << "Contact No     : " << contact[i] << endl;
                    cout << "Email ID       : " << email[i] << endl;
                    cout << "Father's Name  : " << fatherName[i] << endl;
                    cout << "Address        : " << address[i] << endl;
                    cout << "Guardian's Name: " << guardianName[i] << endl;
                    found = true;
                    break;
                }
            }
            if (!found){
                cout << "Student with Roll No " << searchRoll << " not found.\n";
            }
        }
        else if (choice == 4){
            int updateRoll;
            cout << "Enter Roll No of student to update: ";
            cin >> updateRoll;

            bool found = false;
            for (int i = 0; i < count; i++){
                if (rollNo[i] == updateRoll){
                    found = true;

                    cout << "Student Found! Enter new details below.\n";

                    cout << "Enter Admission No: ";
                    cin >> admissionNo[i];

                    cin.ignore(); 
                    cout << "Enter Name: ";
                    getline(cin, names[i]);

                    cout << "Enter Branch: ";
                    cin >> branch[i];

                    cout << "Enter Section: ";
                    cin >> section[i];

                    cout << "Enter Previous Semester SGPA: ";
                    cin >> sgpa[i];

                    cout << "Enter Contact No: ";
                    cin >> contact[i];

                    cout << "Enter Email ID: ";
                    cin >> email[i];

                    cin.ignore();   
                    cout << "Enter Father's Name: ";
                    getline(cin, fatherName[i]);

                    cout << "Enter Address: ";
                    getline(cin, address[i]);

                    cout << "Enter Guardian's Name: ";
                    getline(cin, guardianName[i]);

                    cout << "Student record updated successfully!\n";
                    break;
                }
            }
            if (!found){
                cout << "Student with Roll No " << updateRoll << " not found.\n";
            }
        }
        else if (choice == 5){
            cout << "Exiting program. Goodbye!\n";
        }
        else{
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}