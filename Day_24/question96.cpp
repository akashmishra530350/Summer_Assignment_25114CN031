// Write a program to Remove duplicate characters.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        bool Duplicate = false;
        for (int j = 0; j < result.length(); j++) {
            if (str[i] == result[j]) {
                Duplicate = true;
                break;
            }
        }
        if (!Duplicate) {
            result += str[i];
        }
    }
    cout << "String after removing duplicates: " << result << endl;
    return 0;
}
