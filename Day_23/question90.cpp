// Write a program to Find first repeating charcter.
#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    int count[256] = {0};
    for (char c : str) {
        count[c]++;
    }
    char firstRepeating = '\0';
    for (char c : str) {
        if (count[c] > 1) {
            firstRepeating = c;
            break;
        }
    }
    if (firstRepeating != '\0') {
        cout << "The first repeating character is: " << firstRepeating << endl;
    } else {
        cout << "There are no repeating characters." << endl;
    }

    return 0;
}