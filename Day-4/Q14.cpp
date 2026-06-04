#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int first = 0, second = 1, next;

    if (n == 1) {
        cout << first;
    }
    else if (n == 2) {
        cout << second;
    }
    else {
        for (int i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        cout << second;
    }

    return 0;
}