#include <bits/stdc++.h>
using namespace std;

int main () {

    int num, sum = 0;
    cin >> num;

    for (int i=1; i<=num; i++) {
        sum += i;
    }
    cout << "The Sum Is: " << sum;

    return 0;
}