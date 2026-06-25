#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));              
    int number = rand() % 100 + 1; 
    int guess, attempts = 0;

    cout << "===== Number Guessing Game =====\n";
    cout << "I have selected a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too High! Try Again.\n";
        }
        else if (guess < number) {
            cout << "Too Low! Try Again.\n";
        }
        else {
            cout << "Congratulations! You guessed the number in "
                 << attempts << " attempts.\n";
        }

    } while (guess != number);

    return 0;
}