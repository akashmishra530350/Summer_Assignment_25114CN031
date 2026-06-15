// Write a program to Move zeroes to end.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i,temp=0,j;
    cout<<"enter the size of array: ";
    cin>>num;
    int array[num];
    cout<<"enter the element of array: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    for(j=0;j<num-1;j++){
        for(i=0;i<num-1;i++){
            if(array[i]==0){
                temp=array[i+1];
                array[i+1]=array[i];
                array[i]=temp;
            }
        }
    }
    for(i=0;i<num;i++){
        cout<<array[i];
    }
    return 0;
}