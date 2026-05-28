#include <bits/stdc++.h>
using namespace std;

int main () {

    int num;
    int i = 0;
    cin >> num;

    while (num>0) {
        num = num/10;
        i++;
    }
    cout << "The Number Of Digits In The Entered Number Is: " << i;
}