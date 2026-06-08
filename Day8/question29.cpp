// Write a program to Print half pyramid pattern.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the number of rows in pyramid: ";
    cin>>num;
    cout<<"Half Pyramid Pattern: "<<endl;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}