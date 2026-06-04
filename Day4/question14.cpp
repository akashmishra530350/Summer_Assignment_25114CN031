// write a program to find nth Fibonacci term.
#include <iostream>
using namespace std;
int main(){
    double first=0,second=1,sum,i,num;
    cout<<"enter the number of terms in fibonacci series: ";
    cin>>num;
    cout<<"fibonacci series: ";
    for(i=1;i<num-1;i++){
        sum=first +second;
        first=second;
        second=sum;
    }
    cout<<sum;
    return 0;
}