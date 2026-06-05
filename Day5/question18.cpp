// Write a program to Check strong number.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,rem,sum=0,original;
    cout<<"enter the number to check: ";
    cin>>num;
    original=num;
    while(num>0){
        rem=num%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
            fact = fact*i;
        }
        sum+=fact;
        num=num/10;
    }
    if(sum==original){
        cout<<"GIVEN NUMBER IS STRONG NUMBER.";
    }
    else
    {cout<<"NOT A STRONG NUMBER.";}
    return 0;
}