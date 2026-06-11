// Write a program to Write function to find factorial.
#include <bits/stdc++.h>
using namespace std;
int fact(int num);
int main(){
    int num;
    cout<<"enter the number for factorial: ";
    cin>>num;
    fact(num);
    cout<<fact(num);
}
int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}