// Write a program to Sort words by length.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
    return a.length() < b.length();
}

int main() {
    int n;
    cout << "Enter the number of words: ";
    cin >> n;
    string words[n];
    cout << "Enter the words: ";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    sort(words, words + n, compare);
    cout << "Words in order of increasing length: ";
    for (int i = 0; i < n; i++) {
        cout << words[i] << " ";
    }
    return 0;
}
