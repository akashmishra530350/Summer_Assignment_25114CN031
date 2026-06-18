// Write a program to Bubble sort.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i,j,temp;
    cout<<"enter the size of array: ";
    cin>>num;
    int array[num];
    cout<<"enter the elements of array: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;            
            }
        }
    }
    for(i=0;i<num;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}