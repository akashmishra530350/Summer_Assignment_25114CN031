// Write a program to Sort names alphabetically. 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of names: ";
    cin >> n;
    string names[n];
    cout << "Enter the names: ";
    for(int i = 0; i < n; i++){
        cin >> names[i];
    }
    sort(names, names + n);
    cout << "Names in alphabetical order: ";
    for(int i = 0; i < n; i++){
        cout << names[i] << " ";
    }
    return 0;
}
