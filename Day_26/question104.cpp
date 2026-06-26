// Write a program to create quiz application.
#include <iostream>
using namespace std;
int main() {
    int score = 0;
    int answer;
    cout << "Welcome to the Quiz!" << endl;
    cout << "Question 1: What is the capital of India?" << endl;
    cout << "1. Lucknow" << endl;
    cout << "2. Mumbai" << endl;
    cout << "3. New Delhi" << endl;
    cout << "Enter your answer (1-3): ";
    cin >> answer;
    if (answer == 3) {
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is New Delhi." << endl;
    }
    cout << "Your final score is: " << score << "/1" << endl;
    return 0;
}
