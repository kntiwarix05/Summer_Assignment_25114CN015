#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int rollNo[MAX];
    string name[MAX];
    float marks[MAX];
    int n = 0, choice;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Update Student Record\n";
        cout << "5. Delete Student Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (n >= MAX) {
                cout << "Record storage is full!\n";
                break;
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
            break;

        case 2:
            if (n == 0) {
                cout << "No records available.\n";
            } else {
                cout << "\nStudent Records:\n";
                cout << "-----------------------------------------\n";
                cout << "Roll\tName\t\tMarks\n";
                cout << "-----------------------------------------\n";

                for (int i = 0; i < n; i++) {
                    cout << rollNo[i] << "\t"
                         << name[i] << "\t\t"
                         << marks[i] << endl;
                }
            }
            break;

        case 3: {
            int searchRoll;
            bool found = false;

            cout << "Enter Roll Number to Search: ";
            cin >> searchRoll;

            for (int i = 0; i < n; i++) {
                if (rollNo[i] == searchRoll) {
                    cout << "\nRecord Found:\n";
                    cout << "Roll Number : " << rollNo[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Marks       : " << marks[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Record not found.\n";

            break;
        }

        case 4: {
            int updateRoll;
            bool found = false;

            cout << "Enter Roll Number to Update: ";
            cin >> updateRoll;

            for (int i = 0; i < n; i++) {
                if (rollNo[i] == updateRoll) {
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

            break;
        }

        case 5: {
            int deleteRoll;
            bool found = false;

            cout << "Enter Roll Number to Delete: ";
            cin >> deleteRoll;

            for (int i = 0; i < n; i++) {
                if (rollNo[i] == deleteRoll) {
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

            break;
        }

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}