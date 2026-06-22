// Write a program to Check palindrome string.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str,reverse;
    int i,count=0;
    cout<<"enter the string to check for: ";
    cin>>str;
    int size=str.size();
    for(i=0;i<size/2;i++){
        if(str[i]!=str[size-i-1]){
        cout<<"No string is not palindrome.";
        count++;
        break;
        }
    }
    if(count==0){
        cout<<"Yes string is palindrome.";
    }
    return 0;
}