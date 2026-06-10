// Write a program to print character pyramid.
#include <bits/stdc++.h>
using namespace std;
int main(){
    char character;
    char i,j;
    cout<<"enter the character for Pyramid: ";
    cin>>character;
    for(i='A';i<=character;i++){
        for(j=character;j>=i;j--){
        cout<<" ";
        }
        for(j='A';j<=i;j++){
            cout<<j;
        }
        for(j=i-1;j>='A';j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}