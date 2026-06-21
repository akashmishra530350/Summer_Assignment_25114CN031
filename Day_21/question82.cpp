// Write a program to reverse a string.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string word,reverse;
    int i=0,n;
    cout<<"enter the string to reverse: ";
    cin>>word;
    n=word.size();
    while(i<n/2){
        swap(word[i],word[n-i-1]);
        i++;
    }
    cout<<"reversed string is: "<<word;
    return 0;
}
