// Write a program to Rotate array left.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,d,i,j=0;
    cout<<"enter the number of elements of array: ";
    cin>>num;
    int arr[num];
    for(i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<"enter the places to shift array to left: ";
    cin>>d;
    d=d%num;
    int temp[d];
    for(i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(i=d;i<num;i++){
        arr[i-d]=arr[i];
    }
    for(i=num-d;i<num;i++){
        arr[i]=temp[i-(num-d)];
    }
    for(i=0;i<num;i++){
        cout<<arr[i];
    }
    return 0;
}