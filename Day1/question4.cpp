//write a program to count digits in a number.
#include <iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"enter any number: ";
    cin>>num;
    while(num!=0){ 
        count++;
        num=num/10;
    }
    cout<<count;
    return 0;
}
