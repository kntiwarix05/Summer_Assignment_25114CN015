#include <bits/stdc++.h>
using namespace std;

int main() {

    int start, end;
    cin >> start >> end;

    for (int num = start; num <= end; num++) {

        int original = num;
        int temp = num;
        int sum = 0;

        while (temp > 0) {
            int digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }

        if (sum == original)
            cout << original << " ";
    }

    return 0;
}