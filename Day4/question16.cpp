// Write a program to Print Armstrong numbers in a range.
#include <bits/stdc++.h>
using namespace std;
int isarmstrong(int i);

int main(){
    int num1,num2,i;
    cout<<"enter the range to check for: ";
    cin>>num1>>num2;
    for(i=num1;i<=num2;i++){
       isarmstrong(i);
    }  
    return 0;
}
int isarmstrong(int i){
    int count=0,sum=0,rem;
        int temp=i;
        while(temp!=0){
            count++;
            temp=temp/10;
        }
        temp=i;
        while(temp!=0){
            rem=temp%10;
            sum=sum+round(pow(rem,count));
            temp=temp/10;
        }
        if(sum==i){
            cout<<i<<" ";
        }
}