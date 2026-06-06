// Write a program to Convert binary to decimal.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i,count=0,rem,sum=0;
    cout<<"enter the number to check for: ";
    cin>>num;
    while(num!=0){
        rem=num%10;
        sum=sum+(rem*pow(2,count));
        num=num/10;
        count++;
    }
    cout<<sum;
}