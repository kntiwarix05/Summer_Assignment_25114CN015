#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    bool issued;
};

int main()
{
    vector<Book> library;
    int choice;

    do
    {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Book b;
            cout << "Enter Book ID: ";
            cin >> b.id;
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, b.title);

            cout << "Enter Author Name: ";
            getline(cin, b.author);

            b.issued = false;
            library.push_back(b);

            cout << "Book added successfully.\n";
            break;
        }

        case 2:
        {
            if (library.empty())
            {
                cout << "No books available.\n";
            }
            else
            {
                cout << "\nBook List:\n";
                for (auto &b : library)
                {
                    cout << "ID: " << b.id << endl;
                    cout << "Title: " << b.title << endl;
                    cout << "Author: " << b.author << endl;
                    cout << "Status: "
                         << (b.issued ? "Issued" : "Available") << endl;
                    cout << "--------------------------\n";
                }
            }
            break;
        }

        case 3:
        {
            int id;
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            bool found = false;
            for (auto &b : library)
            {
                if (b.id == id)
                {
                    found = true;
                    if (!b.issued)
                    {
                        b.issued = true;
                        cout << "Book issued successfully.\n";
                    }
                    else
                    {
                        cout << "Book is already issued.\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 4:
        {
            int id;
            cout << "Enter Book ID to Return: ";
            cin >> id;

            bool found = false;
            for (auto &b : library)
            {
                if (b.id == id)
                {
                    found = true;
                    if (b.issued)
                    {
                        b.issued = false;
                        cout << "Book returned successfully.\n";
                    }
                    else
                    {
                        cout << "Book was not issued.\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 5:
        {
            int id;
            cout << "Enter Book ID to Search: ";
            cin >> id;

            bool found = false;
            for (auto &b : library)
            {
                if (b.id == id)
                {
                    found = true;
                    cout << "\nBook Found:\n";
                    cout << "ID: " << b.id << endl;
                    cout << "Title: " << b.title << endl;
                    cout << "Author: " << b.author << endl;
                    cout << "Status: "
                         << (b.issued ? "Issued" : "Available") << endl;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";

            break;
        }

        case 6:
            cout << "Exiting Library Management System...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}