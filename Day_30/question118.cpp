// Write a program to create mini library system.
#include <iostream>
#include <string>
using namespace std;
int main() {
    const int MAX_BOOKS = 100;
    string titles[MAX_BOOKS];
    string authors[MAX_BOOKS];
    int numBooks = 0;
    char choice;
    do {
        cout << "Enter book title: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, titles[numBooks]);
        cout << "Enter book author: ";
        getline(cin, authors[numBooks]);
        numBooks++;

        cout << "Do you want to add another book? (y/n): ";
        cin >> choice;
    } while (choice == 'y' && numBooks < MAX_BOOKS);

    cout << "\nLibrary Records:\n";
    for (int i = 0; i < numBooks; i++) {
        cout << "Title: " << titles[i] << ", Author: " << authors[i] << endl;
    }
    return 0;
}