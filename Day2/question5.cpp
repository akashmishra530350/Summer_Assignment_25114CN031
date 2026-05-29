// write a program to find sum of digits of a number.
#include<iostream>
using namespace std;
int main(){
    int num,sum=0,rem=0;
    cout<<"enter any number: ";
    cin>>num;
    while(num!=0){
        rem= num%10;
        sum += rem;
        num=num/10;
    }
    cout<<sum;
    return 0;
}