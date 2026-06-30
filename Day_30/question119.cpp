// Write a program to create mini employee management system.
#include <iostream>
#include <string>
using namespace std;
int main(){
    const int MAX_EMPLOYEES = 100;
    string names[MAX_EMPLOYEES];
    int ages[MAX_EMPLOYEES];
    string positions[MAX_EMPLOYEES];
    int numEmployees = 0;
    char choice;
    do {
        cout << "Enter employee name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, names[numEmployees]);
        cout << "Enter employee age: ";
        cin >> ages[numEmployees];
        cin.ignore(); // Clear the input buffer
        cout << "Enter employee position: ";
        getline(cin, positions[numEmployees]);
        numEmployees++;

        cout << "Do you want to add another employee? (y/n): ";
        cin >> choice;
    } while (choice == 'y' && numEmployees < MAX_EMPLOYEES);

    cout << "\nEmployee Records:\n";
    for (int i = 0; i < numEmployees; i++) {
        cout << "Name: " << names[i] << ", Age: " << ages[i] << ", Position: " << positions[i] << endl;
    }
    return 0;
}