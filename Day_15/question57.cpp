// Write a program to Reverse array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,array[100],i,temp;
    cout<<"enter the size of array: ";
    cin>>num;
    cout<<"enter elements of array: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    for(i=0;i<num-i;i++){
        {temp=array[i];
        array[i]=array[num-i-1];
        array[num-i-1]=temp;
        }
    }
    for(i=0;i<num;i++){
        cout<<array[i]<< " ";
    }
    return 0;
}