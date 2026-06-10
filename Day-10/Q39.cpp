#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {

        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}