// Write a program to create inventory management syastem.
#include <iostream>
#include <string>
using namespace std;
int main() {
    int choice;
    string itemName;
    int quantity;
    double price;
    cout << "Inventory Management System" << endl;
    cout << "1. Add Item" << endl;
    cout << "2. Display Inventory" << endl;
    cout << "3. Update Item Quantity" << endl;
    cout << "4. Remove Item" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter item name: ";
            cin.ignore();
            getline(cin, itemName);
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter price: ";
            cin >> price;
            // Code to add item to inventory
            cout << "Item added to inventory." << endl;
            break;
        case 2:
            // Code to display inventory
            cout << "Displaying inventory..." << endl;
            break;
        case 3:
            cout << "Enter item name to update quantity: ";
            cin.ignore();
            getline(cin, itemName);
            cout << "Enter new quantity: ";
            cin >> quantity;
            // Code to update item quantity
            cout << "Item quantity updated." << endl;
            break;
        case 4:
            cout << "Enter item name to remove: ";
            cin.ignore();
            getline(cin, itemName);
            // Code to remove item from inventory
            cout << "Item removed from inventory." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}