#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {

        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}