// Write a program to print number pyramid.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i,j;
    cout<<"enter the number of rows: ";
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=num;j>=i;j--){
        cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}