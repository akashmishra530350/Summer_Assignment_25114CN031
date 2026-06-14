// Write a program to Linear search.
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
            break;
        }
    }
        if(count>0)
            cout<<search<<" is found at "<<i+1<<" position";
        else
            cout<<search <<" is NOT found.";
    return 0;
}
