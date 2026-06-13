// Write a program to Find sum and average of array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i;
    float average,sum=0;
    cout<<"enter the size of array: ";
    cin>>num;
    int array[num];
    cout<<"enter the elements of array: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    for(i=0;i<num;i++){
        sum+=array[i];
    }
    average=sum/num;
    cout<<"Sum of array: "<<sum<<endl;
    cout<<"Average of array: "<<average;
    return 0;
}