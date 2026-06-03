#include <bits/stdc++.h>
using namespace std;

int main() {

    int start, end;
    cin >> start >> end;

    for (int num = start; num <= end; num++) {

        int count = 0;

        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                count++;
            }
        }

        if (count == 2) {
            cout << num << " ";
        }
    }

    return 0;
}