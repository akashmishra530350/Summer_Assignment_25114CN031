// Write a program to convert lowercase to uppercase.
#include <bits/stdc++.h> 
using namespace std;
int main(){
    string str;
    int i;
    cout<<"enter the character to convert: ";
    cin>>str;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a'&& str[i]<='z'){
        str[i]=str[i]-32;
        }
    }
    cout<<"UPPERCASE is: "<<str;
    return 0;
}