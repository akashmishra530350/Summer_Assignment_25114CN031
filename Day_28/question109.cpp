// write a program to create library management system.
#include <iostream>
using namespace std;
int main()
{
    int bookID;
    string bookTitle;
    string authorName;
    int quantity;

    cout << "Enter book ID: ";
    cin >> bookID;

    cout << "Enter book title: ";
    cin.ignore(); 
    getline(cin, bookTitle);

    cout << "Enter author name: ";
    getline(cin, authorName);

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "\nBook Details:\n";
    cout << "Book ID: " << bookID << endl;
    cout << "Book Title: " << bookTitle << endl;
    cout << "Author Name: " << authorName << endl;
    cout << "Quantity: " << quantity << endl;

    return 0;
}