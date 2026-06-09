// Write a program to print hollow square pattern.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,j,i;
    cout<<"enter length of square: ";
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(i==0||i==num-1||j==0||j==num-1){
                    cout<<"* ";
                }
            else
                {cout<<"  ";
                }
            }
        cout<<"\n"; 
    }
    return 0;
}