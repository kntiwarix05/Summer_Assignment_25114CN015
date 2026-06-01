#include <bits/stdc++.h>
using namespace std;

int main () {
    int num, count = 0;
    cin >> num;

    if (num == 0) {
        cout << "The Number Of Digits Is: 1";
    } else {
        while (num > 0) {
            num /= 10;
            count++;
        }
        cout << "The Number Of Digits Is: " << count;
    }
    return 0;
}