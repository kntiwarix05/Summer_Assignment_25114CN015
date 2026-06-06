#include <iostream>
using namespace std;

int main() {
    int decimal, binary = 0, place = 1;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = binary + (remainder * place);

        place = place * 10;
        decimal = decimal / 2;
    }

    cout << "Binary number: " << binary;

    return 0;
}