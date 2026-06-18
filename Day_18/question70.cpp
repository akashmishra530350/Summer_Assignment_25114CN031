// Write a program to Selection sort.
#include<iostream>
using namespace std;
int selectionsorting(int num);
int main(){
    int num;
    cout<<"enter the size of array: ";
    cin>>num;
    selectionsorting(num);
}
int selectionsorting(int num){
    int arr[100],temp,min,i,j;
    cout<<"enter the elements of array: ";
    for( i=0;i<num;i++){
        cin>>arr[i];}
    for(i=0;i<num;i++){
        for( j=i+1;j<num;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for( i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
}