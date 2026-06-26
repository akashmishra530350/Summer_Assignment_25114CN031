// Write a program to create ATM simulation.
#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;
    cout << "Welcome to the ATM!" << endl;
    cout << "Your current balance is: $" << balance << endl;
    do {
        cout << "\n1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance is: Rupees" << balance << endl;
                break;
            case 2:
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful. Your new balance is: Rupees" << balance << endl;
                } else {
                    cout << "Invalid amount. Please enter a positive value." << endl;
                }
                break;
            case 3:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful. Your new balance is: Rupees" << balance << endl;
                } else {
                    cout << "Invalid amount or insufficient funds." << endl;
                }
                break;
            case 4:
                cout << "Thank you for using the ATM!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}