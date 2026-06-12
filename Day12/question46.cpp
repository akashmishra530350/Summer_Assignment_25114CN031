// Write a programto Write function for Armstrong.
#include <bits/stdc++.h>
using namespace std;
int armstrong(int num);
int main(){
    int num;
    cout<<"enter the number to check for: ";
    cin>>num;
    armstrong(num);
}
int armstrong(int num){
    int count=0,rem,check=0;
    int original=num;
    int temp=num;
    while(temp!=0){
        count++;
        temp=temp/10;
    }
    while(num!=0){
        rem=num%10;
        check=check+round(pow(rem,count));
        num=num/10;
    }
    if(check==original){
        cout<<original<<" is a Armstrong number.";
    }
    else
    cout<<"Not a Armstrong number.";
}