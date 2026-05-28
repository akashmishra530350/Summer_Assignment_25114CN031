//Write a program to Print multiplication table of a given number.
#include <iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"enter any number: ";
    cin>>num;
    for(i=1;i<=10;i++){
        cout<< num << " * "<<i<<" = ";
        cout<<num*i<<endl;
    }
    return 0;

}
