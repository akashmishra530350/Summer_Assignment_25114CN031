// Write a program to Recursive Fibonacci.
#include <bits/stdc++.h>
using namespace std;
int fibonacci(int num);
int main(){
    int num;
    cout<<"enter the number for fibonacci series: ";
    cin>>num;
    fibonacci(num);
    for(int i=0;i<num;i++){
    cout<<fibonacci(i)<<" ";
    }
    return 0;
}
int fibonacci(int num){
    if(num<=1){
        return num;
    }
    else
    return fibonacci(num-1)+fibonacci(num-2);
}