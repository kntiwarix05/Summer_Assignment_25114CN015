#include <bits/stdc++.h>
using namespace std;

int main () {

    int num, n, sum = 0;
    cin >> num;

    while (num > 0) {
            n = num%10;
            sum = sum + n;
            num = num/10;
    }  
    cout << "The Sum Of The Digits In The Entered Number Is: " << sum;

    return 0;
}