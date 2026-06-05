#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int largestPrimeFactor = 1;

    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            bool isPrime = true;

            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                largestPrimeFactor = i;
            }
        }
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}