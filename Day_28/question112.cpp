// write a program to create contact management system.
#include <iostream>
using namespace std;
int main(){
    int contactID;
    string contactName;
    string phoneNumber;
    string emailAddress;

    cout << "Enter contact ID: ";
    cin >> contactID;

    cout << "Enter contact name: ";
    cin.ignore(); 
    getline(cin, contactName);

    cout << "Enter phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter email address: ";
    getline(cin, emailAddress);

    cout << "\nContact Details:\n";
    cout << "Contact ID: " << contactID << endl;
    cout << "Contact Name: " << contactName << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Email Address: " << emailAddress << endl;

    return 0;
}