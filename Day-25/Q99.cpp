#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[100], temp;
    int n;

    cout << "Enter the number of names: ";
    cin >> n;

    cout << "Enter the names:\n";
    for (int i = 0; i < n; i++) {
        cin >> name[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (name[i] > name[j]) {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    cout << "\nNames in Alphabetical Order:\n";
    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }

    return 0;
}