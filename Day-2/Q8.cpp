#include <bits/stdc++.h>
using namespace std;

int main () {

    int num, n, rev = 0;
    cin >> num;

    int originalNum = num; 

    while (num > 0) {
            n = num%10;
            rev = rev*10 + n;
            num = num/10;
    }
    if (rev == originalNum) {
        cout << "The Entered Number Is A Palindrome.";
    }
    else {
        cout << "The Entered Number Is Not A Palindrome.";
    }

    return 0;
}