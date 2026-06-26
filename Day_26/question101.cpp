// Write a program to create a number guessing game.
#include <iostream>
#include <random>
using namespace std;
int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    int secretNumber = dis(gen);
    int guess,attempts = 0;
    cout << "Welcome to the Number Guessing Game " << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts+=1;
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
