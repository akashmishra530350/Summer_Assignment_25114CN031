// Write a program to Write function for palindrome.
#include <bits/stdc++.h>
using namespace std;
int palindrome(int num);
int main(){
    int num;
    cout<<"enter the number to check for: ";
    cin>>num;
    palindrome(num);
}
int palindrome(int num){
    int reverse=0;
    int original=num;
    while(num!=0){
    reverse=reverse*10+num%10;
    num=num/10;
    }
    if(original==reverse){
        cout<<original<<" is a palindrome number.";
    }
    else
    cout<<"Not a palindrome number.";
}