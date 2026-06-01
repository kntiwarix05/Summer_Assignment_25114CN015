#include <bits/stdc++.h>
using namespace std;

int main () {
    int num, fact = 1;
    cin >> num;

    for (int i=1; i<=num; i++) {
        fact *= i;
    }
    cout << "The Factorial Is: " << fact;

    return 0;

}