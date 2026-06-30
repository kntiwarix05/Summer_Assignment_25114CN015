#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int rollNo[MAX];
string name[MAX];
float marks[MAX];
int n = 0;

// Function to add a student
void addStudent() {
    if (n >= MAX) {
        cout << "Record storage is full!\n";
        return;
    }

    cout << "Enter Roll Number: ";
    cin >> rollNo[n];

    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, name[n]);

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
    cout << "Student record added successfully.\n";
}

// Function to display all students
void displayStudents() {
    if (n == 0) {
        cout << "No records available.\n";
        return;
    }

    cout << "\n-------------------------------------------------\n";
    cout << "Roll No\tName\t\tMarks\n";
    cout << "-------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << rollNo[i] << "\t"
             << name[i] << "\t\t"
             << marks[i] << endl;
    }
}

// Function to search student
void searchStudent() {
    int roll;
    bool found = false;

    cout << "Enter Roll Number to Search: ";
    cin >> roll;

    for (int i = 0; i < n; i++) {
        if (rollNo[i] == roll) {
            cout << "\nRecord Found\n";
            cout << "Roll Number : " << rollNo[i] << endl;
            cout << "Name        : " << name[i] << endl;
            cout << "Marks       : " << marks[i] << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Record not found.\n";
}

// Function to update student
void updateStudent() {
    int roll;
    bool found = false;

    cout << "Enter Roll Number to Update: ";
    cin >> roll;

    for (int i = 0; i < n; i++) {
        if (rollNo[i] == roll) {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, name[i]);

            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "Record updated successfully.\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Record not found.\n";
}

// Function to delete student
void deleteStudent() {
    int roll;
    bool found = false;

    cout << "Enter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i < n; i++) {
        if (rollNo[i] == roll) {
            for (int j = i; j < n - 1; j++) {
                rollNo[j] = rollNo[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            n--;
            cout << "Record deleted successfully.\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Record not found.\n";
}

// Function to display topper
void showTopper() {
    if (n == 0) {
        cout << "No records available.\n";
        return;
    }

    int top = 0;

    for (int i = 1; i < n; i++) {
        if (marks[i] > marks[top])
            top = i;
    }

    cout << "\nTopper Details\n";
    cout << "Roll Number : " << rollNo[top] << endl;
    cout << "Name        : " << name[top] << endl;
    cout << "Marks       : " << marks[top] << endl;
}

int main() {
    int choice;

    do {
        cout << "\n========== Student Management System ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Show Topper\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            showTopper();
            break;

        case 7:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}