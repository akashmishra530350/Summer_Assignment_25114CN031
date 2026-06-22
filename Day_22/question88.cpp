// Write a program to Remove spaces from string.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string result;
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] != ' ') {
            result += str[i];
        }
    }
    cout << "String without spaces: " << result << endl;
    return 0;
}