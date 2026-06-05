//Write a program to check Perfect number.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"enter the number to check: ";
    cin>>num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        cout<<"PERFECT NUMBER.";
    }
    else
        cout<<"NOT A PERFECT NUMBER.";

    return 0;
}