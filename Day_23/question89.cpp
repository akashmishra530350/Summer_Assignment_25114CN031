// Write a program to Find first non-repeating character.
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
    char firstNonRepeating = '\0';
    for (char c : str) {
        if (count[c] == 1) {
            firstNonRepeating = c;
            break;
        }
    }
    if (firstNonRepeating != '\0') {
        cout << "The first non-repeating character is: " << firstNonRepeating << endl;
    } else {
        cout << "There are no non-repeating characters." << endl;
    }

    return 0;
}
