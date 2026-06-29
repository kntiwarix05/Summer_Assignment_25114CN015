#include <iostream>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Item items[100];
    int n = 0, choice, searchId;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display All Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Item Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Item ID: ";
            cin >> items[n].id;
            cin.ignore();

            cout << "Enter Item Name: ";
            getline(cin, items[n].name);

            cout << "Enter Quantity: ";
            cin >> items[n].quantity;

            cout << "Enter Price: ";
            cin >> items[n].price;

            n++;
            cout << "Item added successfully.\n";
            break;

        case 2:
            if (n == 0) {
                cout << "Inventory is empty.\n";
            } else {
                cout << "\nID\tName\t\tQuantity\tPrice\n";
                for (int i = 0; i < n; i++) {
                    cout << items[i].id << "\t"
                         << items[i].name << "\t\t"
                         << items[i].quantity << "\t\t"
                         << items[i].price << endl;
                }
            }
            break;

        case 3: {
            cout << "Enter Item ID to search: ";
            cin >> searchId;

            bool found = false;
            for (int i = 0; i < n; i++) {
                if (items[i].id == searchId) {
                    cout << "\nItem Found\n";
                    cout << "ID: " << items[i].id << endl;
                    cout << "Name: " << items[i].name << endl;
                    cout << "Quantity: " << items[i].quantity << endl;
                    cout << "Price: " << items[i].price << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Item not found.\n";
            break;
        }

        case 4: {
            cout << "Enter Item ID: ";
            cin >> searchId;

            bool found = false;
            for (int i = 0; i < n; i++) {
                if (items[i].id == searchId) {
                    cout << "Enter New Quantity: ";
                    cin >> items[i].quantity;
                    cout << "Quantity updated successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Item not found.\n";
            break;
        }

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}