// Write a program to Count set bits in a number.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,count=0,temp=0;
    cout<<"enter the number to check for: ";
    cin>>num;
    while(num!=0){
    temp=temp+(num&1);
    num=num/2;
    }
    cout<<temp;
    return 0;

}