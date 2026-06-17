// Write a program to Union of arrays.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,i,j,temp;
    cout<<"enter the size of first array: ";
    cin>>num1;
    int array1[num1];
    cout<<"enter the element of first array: ";
    for(i=0;i<num1;i++){
        cin>>array1[i];
    }
    cout<<"enter the size of second array: ";
    cin>>num2;
    int array2[num2];
    cout<<"enter the element of second array: ";
    for(i=0;i<num2;i++){
        cin>>array2[i];
    }
    int sum=num1+num2;
    int array3[sum];
    for(i=0;i<num1;i++){
        array3[i]=array1[i];
    }
    for(i=0;i<num2;i++){
        array3[num1+i]=array2[i];
    }
    for(i=0;i<sum;i++){
        for(j=i+1;j<sum;j++){
            if(array3[i]==array3[j]){
                temp=array3[j+1];
                array3[j+1]==array3[j];
                array3[j]=temp;
            }
        }
        if(array3[i]==array3[j]){
            sum-=1;
        }
    }
    for(i=0;i<sum;i++){
        cout<<array3[i]<<" ";
    }
    return 0;
}