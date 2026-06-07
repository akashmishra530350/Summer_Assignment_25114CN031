// Write a program to Recursive factorial.
#include <bits/stdc++.h>
using namespace std;
int fact(int num);
int main(){
    int num;
    cout<<"enter the number for factorial: ";
    cin>>num;
    fact(num);
    cout<<fact(num);
    return 0;
}
// fact(num) fuction calling itself till base condition match.
int fact(int num){
    if(num==1){
        return 1;
    }
    else
    return num*fact(num-1);
}