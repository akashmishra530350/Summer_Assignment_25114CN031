// Write a program to Write funtion to find sum of two numbers.
#include <bits/stdc++.h>
using namespace std;
int sum(int num1,int num2);
int main(){
    int num1,num2;
    cout<<"enter the two number for sum: ";
    cin>>num1>>num2;
    sum(num1,num2);
    cout<<sum(num1,num2);
    return 0;
}
int sum(int num1,int num2){
    return (num1+num2);
}