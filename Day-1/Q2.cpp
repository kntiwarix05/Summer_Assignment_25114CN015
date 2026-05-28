#include <bits/stdc++.h>
using namespace std;

int main () {

    int num;
    cin >> num;
    cout << "The Table Of The Entered Number Is: \n";

    for (int i=1; i<=10; i++){
        int mul = num*i;
        cout << mul << "\n";
    }
    return 0;
}