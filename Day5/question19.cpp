// Write a program to Print factors of a number.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,temp=0,large=0,j;
    cout<<"ENTER THE NUMBER TO CHECK FOR: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}