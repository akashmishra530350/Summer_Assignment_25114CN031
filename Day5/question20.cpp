// Write a program to Find largest prime factor.
#include <bits/stdc++.h>
using namespace std;
int largestprime(int num);
int main(){
    int num;
    cout<<"enter the number to check for: ";
    cin>>num;
    int result=largestprime(num);
    cout<<result<<endl;
    return 0;
}
int largestprime(int num){
    int largest=-1,i;
    while(num%2==0){
        largest=2;
        num=num/2;
    }
    for(i=3;i*i<=num;i+=2){
        while(num%i==0){
            largest=i;
            num=num/i;
        }
    }
    if(num>2){
            largest=num;
            return largest;
    }
}