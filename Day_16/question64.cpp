// Write a program to Remove duplicates from array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i,j,count=0,index;
    cout<<"enter the range of array: ";
    cin>>num;
    int array[num];
    cout<<"enter the elements of array: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    set<int>temp;
    for(i=0;i<num;i++){
        temp.insert(array[i]);
    }
    index=0;
    for(auto iterator:temp){
        array[index]=iterator;
        index++;
    }
    for(i=0;i<index;i++){
        cout<<array[i];
    }
    return 0;
}