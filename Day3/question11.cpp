// write a program to find GCD of two numbers.
#include <iostream>
using namespace std;
int main(){
    int num1,num2,gcd,rem;
    cout<< "enter the two numbers: ";
    cin>>num1>>num2;
    while(num1!=0){
    rem=num2%num1;
    num2=num1;
    num1=rem; 
    }
    cout<<"GCD of two number is: "<<num2;
    return 0;
}