// Write a program to print repeated character  pattern.
#include <bits/stdc++.h>
using namespace std;
int main(){
    char num;
    cout<<"enter rows of number triangle: ";
    cin>>num;
    for(char i='A';i<=num;i++){
        for(char j='A';j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}