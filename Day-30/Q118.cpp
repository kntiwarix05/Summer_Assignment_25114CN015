#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int bookId[MAX];
    string title[MAX];
    string author[MAX];
    bool issued[MAX];

    int n = 0, choice;

    do {
        cout << "\n===== Mini Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (n >= MAX) {
                cout << "Library is full!\n";
                break;
            }

            cout << "Enter Book ID: ";
            cin >> bookId[n];

            cin.ignore();
            cout << "Enter Book Title: ";
            getline(cin, title[n]);

            cout << "Enter Author Name: ";
            getline(cin, author[n]);

            issued[n] = false;
            n++;

            cout << "Book added successfully.\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No books available.\n";
            } else {
                cout << "\nBook List:\n";
                cout << "------------------------------------------------------------\n";
                cout << "ID\tTitle\t\tAuthor\t\tStatus\n";
                cout << "------------------------------------------------------------\n";

                for (int i = 0; i < n; i++) {
                    cout << bookId[i] << "\t"
                         << title[i] << "\t\t"
                         << author[i] << "\t\t"
                         << (issued[i] ? "Issued" : "Available") << endl;
                }
            }
            break;

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Search: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (bookId[i] == id) {
                    cout << "\nBook Found\n";
                    cout << "Book ID : " << bookId[i] << endl;
                    cout << "Title   : " << title[i] << endl;
                    cout << "Author  : " << author[i] << endl;
                    cout << "Status  : "
                         << (issued[i] ? "Issued" : "Available") << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 4: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (bookId[i] == id) {
                    found = true;

                    if (issued[i])
                        cout << "Book is already issued.\n";
                    else {
                        issued[i] = true;
                        cout << "Book issued successfully.\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 5: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Return: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (bookId[i] == id) {
                    found = true;

                    if (!issued[i])
                        cout << "Book is already available.\n";
                    else {
                        issued[i] = false;
                        cout << "Book returned successfully.\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 6:
            cout << "Exiting Library System...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 6);

    return 0;
}