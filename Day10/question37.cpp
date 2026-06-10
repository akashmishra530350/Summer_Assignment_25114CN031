// Write a program to print star pyramid.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,j,i;
    cout<<"enter rows: ";
    cin>>num;
    for( i=1;i<=num;i++){
        for(j=1;j<=(2*num)-1;j++){
            if(j>=num-(i-1)&&j<=num+(i-1))
                cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}