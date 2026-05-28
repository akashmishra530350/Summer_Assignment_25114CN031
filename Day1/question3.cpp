// Write a program to find factorial of a number.
#include <iostream>
using namespace std;
int main(){
    int num,i,fact=1;
    cout<<"enter any number: ";
    cin>>num;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}
