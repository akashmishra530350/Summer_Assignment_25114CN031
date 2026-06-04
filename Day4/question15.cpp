// write a program to Check Armstrong number.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,rem,count=0,sum=0,original,initial;
    cout<<"enter the number to check: ";
    cin>>num;
    original=num;
    initial=num;
    while(num!=0){
        count++;
        num=num/10;
    }
    while(original!=0){
        rem=original%10;
        sum+=round(pow(rem,count));
        original=original/10;
    }
    if(initial==sum)
        cout<<"given number is armstrong number";
    else 
    cout<<"given number is not armstrong number";
    return 0;

}