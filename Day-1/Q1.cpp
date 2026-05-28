#include <bits/stdc++.h>
using namespace std;

int main () {

    int num;
    int sum = 0;
    cin >> num;

    for (int i=1; i<=num; i++){
        sum = sum+i;
    }

    cout << "The Sum Of Natural Numbers Till Entered Number Is: " << sum;

    return 0;
}