// Write a program to Find string length without strlen();
#include <bits/stdc++.h>
using namespace std;
int main(){
    string word;
    int i=0,count=0;
    cout<<"enter the word to check for: ";
    cin>>word;
    while(word[i]!=0){
        i++;
        count++;
    }
    cout<<"The length of string is: "<<count;
    return 0;
}
