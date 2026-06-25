#include <iostream>
#include <string>
using namespace std;

int main() {
    string words[100], temp;
    int n;

    cout << "Enter the number of words: ";
    cin >> n;

    cout << "Enter the words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (words[i].length() > words[j].length()) {
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    cout << "\nWords Sorted by Length:\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}