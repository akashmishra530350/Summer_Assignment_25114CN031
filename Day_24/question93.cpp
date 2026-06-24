// Write a program to check string rotation.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "The strings are not rotations of each other." << endl;
        return 0;
    }
    string concatenated = str1 + str1;
    if (concatenated.find(str2) != string::npos) {
        cout << "The strings are rotations of each other." << endl;
    } else {
        cout << "The strings are not rotations of each other." << endl;
    }
    return 0;
}