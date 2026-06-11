// Write a program to Write function to check prime.
#include <bits/stdc++.h>
using namespace std;
int prime(int num);
int main(){
    int num;
    cout<<"enter the number to check for prime: ";
    cin>>num;
    prime(num);
    return 0;
}
int prime(int num){
    int count=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count>0){
        cout<<"Not a prime";
    }
    else
        cout<<"prime.";
}