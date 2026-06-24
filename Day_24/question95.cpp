// Write a program to Find longest word.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str);
    string longestWord = "";
    string currentWord = "";
    for (char c : str) {
        if (c == ' ') {
            if (currentWord.length() > longestWord.length()) {
                longestWord = currentWord;
            }
            currentWord = "";
        } else {
            currentWord += c;
        }
    }
    if (currentWord.length() > longestWord.length()) {
        longestWord = currentWord;
    }
    cout << "Longest word: " << longestWord << endl;
    return 0;
}
    