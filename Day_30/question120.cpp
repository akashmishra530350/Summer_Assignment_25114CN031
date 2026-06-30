// Write a program to develop complete mini project using arrays,strings and functions.
#include <iostream>
#include <string>
using namespace std;
int main() {
    const int MAX_ITEMS = 100;
    string itemNames[MAX_ITEMS];
    float itemPrices[MAX_ITEMS];
    int numItems = 0;
    char choice;

    do {
        cout << "Enter item name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, itemNames[numItems]);
        cout << "Enter item price: ";
        cin >> itemPrices[numItems];
        numItems++;

        cout << "Do you want to add another item? (y/n): ";
        cin >> choice;
    } while (choice == 'y' && numItems < MAX_ITEMS);

    cout << "\nItem Records:\n";
    for (int i = 0; i < numItems; i++) {
        cout << "Item Name: " << itemNames[i] << ", Price: $" << itemPrices[i] << endl;
    }
    return 0;
}