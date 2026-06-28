#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Account
{
    int accountNo;
    string name;
    double balance;
};

int main()
{
    vector<Account> accounts;
    int choice;

    do
    {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Search Account\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Account a;
            cout << "Enter Account Number: ";
            cin >> a.accountNo;
            cin.ignore();

            cout << "Enter Account Holder Name: ";
            getline(cin, a.name);

            cout << "Enter Initial Balance: ";
            cin >> a.balance;

            accounts.push_back(a);
            cout << "Account created successfully.\n";
            break;
        }

        case 2:
        {
            if (accounts.empty())
            {
                cout << "No accounts found.\n";
            }
            else
            {
                cout << "\nAccount Details:\n";
                for (auto &a : accounts)
                {
                    cout << "Account No: " << a.accountNo << endl;
                    cout << "Name: " << a.name << endl;
                    cout << "Balance: Rs. " << a.balance << endl;
                    cout << "--------------------------\n";
                }
            }
            break;
        }

        case 3:
        {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Amount to Deposit: ";
            cin >> amount;

            bool found = false;
            for (auto &a : accounts)
            {
                if (a.accountNo == accNo)
                {
                    a.balance += amount;
                    cout << "Deposit successful.\n";
                    cout << "Updated Balance: Rs. " << a.balance << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Account not found.\n";

            break;
        }

        case 4:
        {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;

            bool found = false;
            for (auto &a : accounts)
            {
                if (a.accountNo == accNo)
                {
                    found = true;
                    if (amount <= a.balance)
                    {
                        a.balance -= amount;
                        cout << "Withdrawal successful.\n";
                        cout << "Remaining Balance: Rs. " << a.balance << endl;
                    }
                    else
                    {
                        cout << "Insufficient Balance.\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Account not found.\n";

            break;
        }

        case 5:
        {
            int accNo;
            cout << "Enter Account Number to Search: ";
            cin >> accNo;

            bool found = false;
            for (auto &a : accounts)
            {
                if (a.accountNo == accNo)
                {
                    cout << "\nAccount Found\n";
                    cout << "Account No: " << a.accountNo << endl;
                    cout << "Name: " << a.name << endl;
                    cout << "Balance: Rs. " << a.balance << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Account not found.\n";

            break;
        }

        case 6:
            cout << "Exiting Bank Account System...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}