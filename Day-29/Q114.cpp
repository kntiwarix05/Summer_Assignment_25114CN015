#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value, i;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== MENU-DRIVEN ARRAY OPERATIONS =====\n";
        cout << "1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2:
                cout << "Enter position (1 to " << n + 1 << "): ";
                cin >> pos;
                cout << "Enter value to insert: ";
                cin >> value;

                if (pos >= 1 && pos <= n + 1) {
                    for (i = n; i >= pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos - 1] = value;
                    n++;
                    cout << "Element inserted successfully.\n";
                } else {
                    cout << "Invalid position!\n";
                }
                break;

            case 3:
                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> pos;

                if (pos >= 1 && pos <= n) {
                    for (i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    cout << "Element deleted successfully.\n";
                } else {
                    cout << "Invalid position!\n";
                }
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> value;

                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        cout << "Element found at position " << i + 1 << endl;
                        break;
                    }
                }

                if (i == n) {
                    cout << "Element not found.\n";
                }
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}