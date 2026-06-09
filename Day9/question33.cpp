// Write a proagram to print reverse star pattern.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter rows of number triangle: ";
    cin>>num;
    for(int i=num;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}