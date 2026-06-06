#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0, place = 1;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        int digit = binary % 10;
        decimal = decimal + (digit * place);

        place = place * 2;
        binary = binary / 10;
    }

    cout << "Decimal number: " << decimal;

    return 0;
}