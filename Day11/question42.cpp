// Write a program to Write function to find maximum.
#include <bits/stdc++.h>
using namespace std;
int max(int arr[100]);
int main(){
    int arr[100],i,num,temp;
    cout<<"enter the number of elements: ";
    cin>>num;
    cout<<"enter elements to check for maximum: ";
    for(i=0;i<num;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(i=0;i<num;i++){
        if(arr[i]>max){
            temp=max;
            max=arr[i];
            arr[i]=temp;
        }
    }
    cout<<"maximum of elements is: "<<max;
}
