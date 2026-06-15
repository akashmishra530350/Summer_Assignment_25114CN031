// Write a program to Rotate array right.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,d,i;
    cout<<"enter the size of array: ";
    cin>>num;
    int array[num];
    cout<<"enter array elements: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    cout<<"enter the palces to shift array to right: ";
    cin>>d;
    d=d%num;
    int temp[num];
    for(i=0;i<d;i++){
        temp[i]=array[num-d+i];
    }
    for(i=0;i<num-d;i++){
        temp[i+d]=array[i];
    }
    for(i=0;i<num;i++){
        array[i]=temp[i];
    }
    for(i=0;i<num;i++){
    cout<<array[i];
    }
    return 0;
}