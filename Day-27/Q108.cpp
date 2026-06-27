#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main()
{
    Student s;

    cout << "===== Marksheet Generation System =====\n";

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    s.total = 0;

    cout << "\nEnter Marks of 5 Subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    if (s.percentage >= 90)
        s.grade = 'A';
    else if (s.percentage >= 75)
        s.grade = 'B';
    else if (s.percentage >= 60)
        s.grade = 'C';
    else if (s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    cout << "\n========== STUDENT MARKSHEET ==========\n";
    cout << "Roll Number : " << s.rollNo << endl;
    cout << "Name        : " << s.name << endl;

    cout << "\nMarks:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " : " << s.marks[i] << endl;
    }

    cout << "\nTotal Marks : " << s.total << "/500" << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;
    cout << "Grade       : " << s.grade << endl;

    if (s.grade == 'F')
        cout << "Result      : Fail\n";
    else
        cout << "Result      : Pass\n";

    return 0;
}