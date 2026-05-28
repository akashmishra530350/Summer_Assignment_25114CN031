//Write a program to Calculate sum of first N natural numbers.
#include <iostream>
using namespace std;
int main(){
    // enter any natural number.
    int num,sum=0,i=1;
    cout<<"enter any natural number: ";
    cin>>num;
    while(i<=num){
        sum +=i;
        i++;
    }
    cout<<sum;
    return 0;
}

