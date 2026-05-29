#include <bits/stdc++.h>
using namespace std;

int main () {

    int num, n, rev = 0;
    cin >> num;

    while (num > 0) {
            n = num%10;
            rev = rev*10 + n;
            num = num/10;
    }
    cout << "The Reverse Of The Entered Number Is: " << rev;

    return 0;
}