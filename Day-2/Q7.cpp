#include <bits/stdc++.h>
using namespace std;

int main () {

    int num, n, product = 1;
    cin >> num;

    while (num > 0) {
            n = num%10;
            product = product * n;
            num = num/10;
    }
    cout << "The Product Of The Digits In The Entered Number Is: " << product;

    return 0;
}