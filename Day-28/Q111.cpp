#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Ticket
{
    int ticketNo;
    string passengerName;
    string destination;
    bool booked;
};

int main()
{
    vector<Ticket> tickets;
    int choice;

    do
    {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Booked Tickets\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Search Ticket\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Ticket t;
            cout << "Enter Ticket Number: ";
            cin >> t.ticketNo;
            cin.ignore();

            cout << "Enter Passenger Name: ";
            getline(cin, t.passengerName);

            cout << "Enter Destination: ";
            getline(cin, t.destination);

            t.booked = true;
            tickets.push_back(t);

            cout << "Ticket booked successfully.\n";
            break;
        }

        case 2:
        {
            if (tickets.empty())
            {
                cout << "No tickets booked.\n";
            }
            else
            {
                cout << "\nBooked Tickets:\n";
                for (auto &t : tickets)
                {
                    if (t.booked)
                    {
                        cout << "Ticket No: " << t.ticketNo << endl;
                        cout << "Passenger: " << t.passengerName << endl;
                        cout << "Destination: " << t.destination << endl;
                        cout << "Status: Booked\n";
                        cout << "-------------------------\n";
                    }
                }
            }
            break;
        }

        case 3:
        {
            int ticketNo;
            cout << "Enter Ticket Number to Cancel: ";
            cin >> ticketNo;

            bool found = false;
            for (auto &t : tickets)
            {
                if (t.ticketNo == ticketNo)
                {
                    found = true;
                    if (t.booked)
                    {
                        t.booked = false;
                        cout << "Ticket cancelled successfully.\n";
                    }
                    else
                    {
                        cout << "Ticket is already cancelled.\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Ticket not found.\n";

            break;
        }

        case 4:
        {
            int ticketNo;
            cout << "Enter Ticket Number to Search: ";
            cin >> ticketNo;

            bool found = false;
            for (auto &t : tickets)
            {
                if (t.ticketNo == ticketNo)
                {
                    found = true;
                    cout << "\nTicket Found\n";
                    cout << "Ticket No: " << t.ticketNo << endl;
                    cout << "Passenger: " << t.passengerName << endl;
                    cout << "Destination: " << t.destination << endl;
                    cout << "Status: "
                         << (t.booked ? "Booked" : "Cancelled") << endl;
                    break;
                }
            }

            if (!found)
                cout << "Ticket not found.\n";

            break;
        }

        case 5:
            cout << "Exiting Ticket Booking System...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}