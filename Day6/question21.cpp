// Write a program to Convert decimal to binary.
#include <bits/stdc++.h>
using namespace std;
int decimaltobinary(int num){
    long result=0;
    int rem,i=1;
    while(num!=0){
        rem=num%2;
        result+=rem*i;
        i=i*10;
        num=num/2;
    }
    cout<<result;
}
int main(){
    int num;
    cout<<"enter the number to convert: ";
    cin>>num;
    long temp=decimaltobinary(num);
    return 0;
}
    