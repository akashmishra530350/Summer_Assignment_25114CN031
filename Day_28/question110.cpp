// write a program to create bank account system.
#include <iostream>
using namespace std;
int main()
{
    int accountNumber;
    string accountHolderName;
    double balance;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter account holder name: ";
    cin.ignore(); 
    getline(cin, accountHolderName);

    cout << "Enter initial balance: ";
    cin >> balance;

    cout << "\nAccount Details:\n";
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder Name: " << accountHolderName << endl;
    cout << "Balance: rupee" << balance << endl;

    return 0;
}