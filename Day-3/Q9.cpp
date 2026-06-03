#include <bits/stdc++.h>
using namespace std;

int main () {

    int num;
    cout << "Enter A Number: ";
    cin >> num;

    for (int i=2; i*i<=num; i++) {
        if (num%i == 0) {
            cout << "It Is Not A Prime Number";
            return 0;
        }
    }   
    cout << "It Is A Prime Number";
    
    return 0;
}