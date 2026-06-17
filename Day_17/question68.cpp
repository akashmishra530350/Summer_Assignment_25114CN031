// Write a program to Find common elements.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,i,j;
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
    int array3[num1];
    for(i=0;i<num1;i++){
        for(j=0;j<num2;j++){
            if(array1[i]==array2[j]){
                cout<<array1[i]<<" ";
            }
        }
    }
    return 0;
}