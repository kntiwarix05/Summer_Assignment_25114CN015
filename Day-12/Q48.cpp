#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    return sum == num;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPerfect(num))
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";

    return 0;
}