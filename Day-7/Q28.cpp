#include <iostream>
using namespace std;

int reverseNum(int num, int rev = 0) {
    if (num == 0) {
        return rev;
    }

    return reverseNum(num / 10, rev * 10 + num % 10);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number = " << reverseNum(num);

    return 0;
}