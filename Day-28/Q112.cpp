#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Contact
{
    int id;
    string name;
    string phone;
    string email;
};

int main()
{
    vector<Contact> contacts;
    int choice;

    do
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Contact c;
            cout << "Enter Contact ID: ";
            cin >> c.id;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, c.name);

            cout << "Enter Phone Number: ";
            getline(cin, c.phone);

            cout << "Enter Email: ";
            getline(cin, c.email);

            contacts.push_back(c);
            cout << "Contact added successfully.\n";
            break;
        }

        case 2:
        {
            if (contacts.empty())
            {
                cout << "No contacts available.\n";
            }
            else
            {
                cout << "\nContact List:\n";
                for (auto &c : contacts)
                {
                    cout << "ID: " << c.id << endl;
                    cout << "Name: " << c.name << endl;
                    cout << "Phone: " << c.phone << endl;
                    cout << "Email: " << c.email << endl;
                    cout << "-------------------------\n";
                }
            }
            break;
        }

        case 3:
        {
            int id;
            cout << "Enter Contact ID to Search: ";
            cin >> id;

            bool found = false;
            for (auto &c : contacts)
            {
                if (c.id == id)
                {
                    found = true;
                    cout << "\nContact Found\n";
                    cout << "ID: " << c.id << endl;
                    cout << "Name: " << c.name << endl;
                    cout << "Phone: " << c.phone << endl;
                    cout << "Email: " << c.email << endl;
                    break;
                }
            }

            if (!found)
                cout << "Contact not found.\n";

            break;
        }

        case 4:
        {
            int id;
            cout << "Enter Contact ID to Delete: ";
            cin >> id;

            bool found = false;
            for (int i = 0; i < contacts.size(); i++)
            {
                if (contacts[i].id == id)
                {
                    contacts.erase(contacts.begin() + i);
                    found = true;
                    cout << "Contact deleted successfully.\n";
                    break;
                }
            }

            if (!found)
                cout << "Contact not found.\n";

            break;
        }

        case 5:
            cout << "Exiting Contact Management System...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}