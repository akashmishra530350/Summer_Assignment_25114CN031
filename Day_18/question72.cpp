// Write a program to Sort array in descending order.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i,j,temp=0;
    cout<<"enter the size of array: ";
    cin>>num;
    int array[num];
    cout<<"enter the elements of array: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(array[j]<array[j+1]){
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;            
            }
        }
    }
    for(i=0;i<num;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}