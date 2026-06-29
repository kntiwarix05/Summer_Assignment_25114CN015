#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n===== MENU-DRIVEN STRING OPERATIONS =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Convert to Lowercase\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "String: " << str << endl;
                break;

            case 2:
                cout << "Length of string = " << str.length() << endl;
                break;

            case 3: {
                string rev = str;
                reverse(rev.begin(), rev.end());
                cout << "Reversed String: " << rev << endl;
                break;
            }

            case 4: {
                string upper = str;
                for (char &ch : upper) {
                    ch = toupper(ch);
                }
                cout << "Uppercase String: " << upper << endl;
                break;
            }

            case 5: {
                string lower = str;
                for (char &ch : lower) {
                    ch = tolower(ch);
                }
                cout << "Lowercase String: " << lower << endl;
                break;
            }

            case 6:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}