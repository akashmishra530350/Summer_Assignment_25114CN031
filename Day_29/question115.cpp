// Write a program to create menu driven string operations system.
#include <iostream>
#include <string>
using namespace std;
int main() {
    int choice;
    string str;
    cout << "Menu Driven String Operations" << endl;
    cout << "1. Find Length of String" << endl;
    cout << "2. Convert to Uppercase" << endl;
    cout << "3. Convert to Lowercase" << endl;
    cout << "4. Reverse the String" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str);

    switch(choice) {
        case 1:
            cout << "Length of String: " << str.length() << endl;
            break;
        case 2:
            for(int i = 0; i < str.length(); i++) {
                str[i] = toupper(str[i]);
            }
            cout << "String in Uppercase: " << str << endl;
            break;
        case 3:
            for(int i = 0; i < str.length(); i++) {
                str[i] = tolower(str[i]);
            }
            cout << "String in Lowercase: " << str << endl;
            break;
        case 4:
            for(int i = 0; i < str.length() / 2; i++) {
                swap(str[i], str[str.length() - 1 - i]);
            }
            cout << "Reversed String: " << str << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}