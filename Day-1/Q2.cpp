#include <bits/stdc++.h>
using namespace std;

int main () {

    int num, table;
    cin >> num;

    for (int i=1; i<=10; i++){
    table = num*i;
    cout << num << " * " << i << " = " << table << endl;    
    }
    return 0;
}