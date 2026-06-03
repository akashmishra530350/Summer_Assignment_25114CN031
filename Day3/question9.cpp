// write a program to check whether a number is prime.
#include <iostream>
using namespace std;
int main(){
    int num,count=1;
    cout<<"enter any number: ";
    cin>>num;
    for(int i=2;i<num;i++){
        if((num%i)==0){
            count++;
        }
    }
    if(count>=2){
        cout<<"NOT a prime number.";
    }
    else
    {
        cout<<"PRIME NUMBER.";
    }
    return 0;
}