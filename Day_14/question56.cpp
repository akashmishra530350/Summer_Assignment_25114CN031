// Write a program to Find duplicates in array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i,j,k;
    cout<<"enter the size of array: ";
    cin>>num;
    int array[num];
    cout<<"enter the elements of array: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(array[i]==array[j]){
                for(k=j;k<num-1;k++){
                    array[k]=array[k+1];
                }
                num--;
                j--;
            }
        }
    }
    cout<<"array without duplicate is: ";
    for(i=0;i<num;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}