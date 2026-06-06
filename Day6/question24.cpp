#include <iostream>
using namespace std;
int main(){
    double base,exponent,result=1;
    cout<<"enter the base: ";
    cin>>base;
    cout<<"enter the exponent: ";
    cin>>exponent;
    while(exponent!=0){
        result=result*base;
        exponent--;
    }
    cout<<result;
    return 0;
}