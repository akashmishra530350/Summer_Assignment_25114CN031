// Write a program to Second largest element.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,array[100],i,largest,second_largest;
    cout<<"enter the size of array: ";
    cin>>num;
    cout<<"enter the array elements: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    largest=array[0];
    for(i=0;i<num;i++){
        if(array[i]>largest){
            second_largest=largest;
            largest=array[i];
            array[i]=second_largest;
        }
    }
    cout<<"second largest element is: "<<second_largest;
    return 0;
}
