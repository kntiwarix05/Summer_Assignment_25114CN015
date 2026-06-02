#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int num, reverse = 0, original = num;
    cin >> num;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    if (original == reverse) {
        cout << "Palindrome Number";
    } 
    else {
        cout << "Not a Palindrome Number";
    }
    return 0;
}