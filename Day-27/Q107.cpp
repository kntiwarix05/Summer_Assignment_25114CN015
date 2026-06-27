#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main()
{
    Employee emp[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display Salary Records\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[n].id;

            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, emp[n].name);

            cout << "Enter Basic Salary: ";
            cin >> emp[n].basicSalary;

            emp[n].hra = 0.20 * emp[n].basicSalary; // 20% HRA
            emp[n].da = 0.10 * emp[n].basicSalary;  // 10% DA
            emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

            n++;
            cout << "Salary record added successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo salary records found.\n";
            }
            else
            {
                cout << "\nSalary Records:\n";
                cout << "------------------------------------------------------------\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "Employee ID  : " << emp[i].id << endl;
                    cout << "Name         : " << emp[i].name << endl;
                    cout << "Basic Salary : " << emp[i].basicSalary << endl;
                    cout << "HRA          : " << emp[i].hra << endl;
                    cout << "DA           : " << emp[i].da << endl;
                    cout << "Gross Salary : " << emp[i].grossSalary << endl;
                    cout << "------------------------------------------------------------\n";
                }
            }
            break;

        case 3:
        {
            int id;
            bool found = false;

            cout << "\nEnter Employee ID to Search: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    cout << "\nEmployee Salary Details:\n";
                    cout << "Employee ID  : " << emp[i].id << endl;
                    cout << "Name         : " << emp[i].name << endl;
                    cout << "Basic Salary : " << emp[i].basicSalary << endl;
                    cout << "HRA          : " << emp[i].hra << endl;
                    cout << "DA           : " << emp[i].da << endl;
                    cout << "Gross Salary : " << emp[i].grossSalary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee record not found.\n";

            break;
        }

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}