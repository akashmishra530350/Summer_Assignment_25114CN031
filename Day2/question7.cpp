// write a program to find product of digits.
#include <iostream>
using namespace std;
int main(){
    int num,product=1,rem=0;
    cout<<"enter the number: ";
    cin>>num;
    while(num!=0){
        rem=num%10;
        product*=rem;
        num=num/10;
    }
    cout<<product;
    return 0;
}