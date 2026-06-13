// Write a program to Input and display array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i;
    cout<<"enter size of array: ";
    cin>>num;
    int array[num];
    cout<<"enter the elements of array: ";
    for(i=0;i<num;i++){
       cin>>array[i];
    }
    cout<<"Array is: ";
    for(i=0;i<num;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}