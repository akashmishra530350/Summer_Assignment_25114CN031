// write a program to Generate Fibonacci series.
#include <iostream>
using namespace std;
int main(){
    int first=0,second=1,sum,i,num;
    cout<<"enter the number of terms in fibonacci series: ";
    cin>>num;
    cout<<"fibonacci series: "<<first<<" "<<second;
    for(i=1;i<num-1;i++){
        sum=first +second;
        first=second;
        second=sum;
        cout<<" "<<sum;
    }
    return 0;
}