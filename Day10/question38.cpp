// Write a program to print reverse pyramid.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i,j;
    cout<<"enter rows in pyramid: ";
    cin>>num;
    for(i=num;i>=1;i--){
        for(j=num;j>=i;j--){
            cout<<" ";
        }
        for(j=(2*i-1);j>=1;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}