#include <bits/stdc++.h>
using namespace std;

int main() {

    int num;
    cin >> num;

    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= num; i++) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}