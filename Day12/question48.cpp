// Write a program to Write funtion for perfect number.
#include <bits/stdc++.h>
using namespace std;
int perfect_num(int num);
int main(){
    int num;
    cout<<"enter the number to check for: ";
    cin>>num;
    perfect_num(num);
    return 0;
}
int perfect_num(int num){
    int i,sum=0,original=num;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(original==sum){
        cout<<original<<" is a Perfect number.";
    }
    else
        cout<<original<<" is NOT a Perfect number.";
}