// Write a program to Frequency of an element.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,search,i,count=0;
    cout<<"enter the size of array: ";
    cin>>num;
    int array[num];
    cout<<"enter the array elements: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    cout<<"enter the element to search for: ";
    cin>>search;
    for(i=0;i<num;i++){
        if(search==array[i]){
            count++;
        }
    }
        if(count>0)
            cout<<"Freqency of  "<<search<<" is "<<count;
        else
            cout<<search <<" is NOT found.";
    return 0;
}
