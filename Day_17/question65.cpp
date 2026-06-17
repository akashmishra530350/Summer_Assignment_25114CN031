// Write a program to Merge arrays.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,i,j,index=0;
    cout<<"enter the size of first array: ";
    cin>>num1;
    int array1[num1];
    cout<<"enter the elements of first array: ";
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
    int size=num1+num2;
    int array3[size];
    i=0;
    j=0;
    while(i<num1 && j<num2){
            if(array1[i]<array2[j]){
                array3[index]=array1[i];
                i++;
                index++;
            }
            else
            {
            array3[index]=array2[j];
            j++;
            index++;
            }
        }
    while(i<num1){
        array3[index++]=array1[i++];
    }
    while(j<num2){
        array3[index++]=array2[j++];
    }
    for(i=0;i<(num1+num2);i++){
        cout<<array3[i]<<" ";
    }
    return 0;
}