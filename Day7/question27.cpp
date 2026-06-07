// Write a program to Recursive sum of digits.
#include <bits/stdc++.h>
using namespace std;
int digit(int num);
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int result=digit(num);
    cout<<result;
    return 0;
}
int digit(int num){
    static int sum=0;
    if(num==0){
        return sum;
    }
    else
     {
     sum+=num%10;
    digit(num/10);
    }
    
}
