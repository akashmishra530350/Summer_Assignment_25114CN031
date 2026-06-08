// Write a program to Print character traingle.
#include <bits/stdc++.h>
using namespace std;
int main(){
    char num;
    cout<<"enter the character: ";
    cin>>num;
    for(char i='A';i<=num;i++){
        for(char j='A';j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}