// Write a program to print repeated-number pattern.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}