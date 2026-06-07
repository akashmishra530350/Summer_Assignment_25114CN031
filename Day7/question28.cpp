// Write a program to Recursive reverse number.
#include <bits/stdc++.h>
using namespace std;
int rev(int num);
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int result=rev(num);
    cout<<result;
    
    return 0;
}
int rev(int num){
    int static reverse=0;
    if(num==0){
        cout<<" ";
        return  reverse;
    }
    else
    {
        reverse=reverse*10+num%10;
        rev(num/10);
    }

}