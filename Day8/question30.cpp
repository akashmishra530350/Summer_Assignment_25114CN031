// Write a program to Print number triangle.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter rows of number triangle: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}