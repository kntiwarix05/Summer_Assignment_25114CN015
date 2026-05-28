#include <bits/stdc++.h>
using namespace std;

int main() {

    int num;
    int fact = 1;
    cin >> num;

    for (int i=1; i<=num; i++) {
        fact = fact*i;
    }
    cout << "The Factorial Of The Entered Number Is: " << fact;

    return 0;
}