#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 10000.0, amount;

    do {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Amount deposited successfully.\n";
                cout << "Updated Balance: Rs. " << balance << endl;
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= balance) {
                    balance -= amount;
                    cout << "Please collect your cash.\n";
                    cout << "Remaining Balance: Rs. " << balance << endl;
                } else {
                    cout << "Insufficient Balance.\n";
                }
                break;

            case 4:
                cout << "Thank you for using the ATM.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}