// write a program to find LCM of two numbers.
#include <iostream>
using namespace std;
int main(){
    int num1,num2,gcd=0,lcm=0,rem=0,product=0;
    cout<< "enter the two numbers: ";
    cin>>num1>>num2;
    product=num1*num2;
    while(num1!=0){
    rem=num2%num1;
    num2=num1;
    num1=rem; 
    }
    gcd=num2;
    lcm=product/gcd;
    cout<<"LCM of numbers is: "<<lcm;
    return 0;
}