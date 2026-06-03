#include <bits/stdc++.h>
using namespace std;

int main() {

    int num1, num2;
    cin >> num1 >> num2;

    int lcm = num1;

    while (lcm % num2 != 0) {
        lcm = lcm + num1;
    }

    cout << "LCM = " << lcm;

    return 0;
}