// write a program to reverse a number.
#include <iostream>
using namespace std;
int main(){
    int num,rem,reverse=0;
    cout<<"enter any number: ";
    cin>>num;
    while(num!=0){
        rem = num%10;
        reverse= reverse*10 + rem;
        num=num/10;
    }
    cout<<reverse;
    return 0;
}