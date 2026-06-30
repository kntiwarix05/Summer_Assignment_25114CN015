#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int empId[MAX];
    string empName[MAX];
    string department[MAX];
    float salary[MAX];

    int n = 0, choice;

    do {
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Update Employee Details\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (n >= MAX) {
                cout << "Employee records are full!\n";
                break;
            }

            cout << "Enter Employee ID: ";
            cin >> empId[n];

            cin.ignore();
            cout << "Enter Employee Name: ";
            getline(cin, empName[n]);

            cout << "Enter Department: ";
            getline(cin, department[n]);

            cout << "Enter Salary: ";
            cin >> salary[n];

            n++;
            cout << "Employee added successfully.\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No employee records found.\n";
            } else {
                cout << "\nEmployee Records:\n";
                cout << "-------------------------------------------------------------\n";
                cout << "ID\tName\t\tDepartment\tSalary\n";
                cout << "-------------------------------------------------------------\n";

                for (int i = 0; i < n; i++) {
                    cout << empId[i] << "\t"
                         << empName[i] << "\t\t"
                         << department[i] << "\t\t"
                         << salary[i] << endl;
                }
            }
            break;

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Search: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (empId[i] == id) {
                    cout << "\nEmployee Found\n";
                    cout << "ID         : " << empId[i] << endl;
                    cout << "Name       : " << empName[i] << endl;
                    cout << "Department : " << department[i] << endl;
                    cout << "Salary     : " << salary[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 4: {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Update: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (empId[i] == id) {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, empName[i]);

                    cout << "Enter New Department: ";
                    getline(cin, department[i]);

                    cout << "Enter New Salary: ";
                    cin >> salary[i];

                    cout << "Employee record updated successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 5: {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (empId[i] == id) {
                    for (int j = i; j < n - 1; j++) {
                        empId[j] = empId[j + 1];
                        empName[j] = empName[j + 1];
                        department[j] = department[j + 1];
                        salary[j] = salary[j + 1];
                    }

                    n--;
                    cout << "Employee record deleted successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 6:
            cout << "Exiting Employee Management System...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}