#include <bits/stdc++.h>
using namespace std;

int main() {

    int num, original, digit;
    int sum = 0;

    cin >> num;
    original = num;

    while (num > 0) {
        digit = num % 10;
        sum = sum + digit * digit * digit;
        num = num / 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}