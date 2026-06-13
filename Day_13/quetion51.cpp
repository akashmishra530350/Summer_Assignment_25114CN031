// Write a program to find largest and smallest element.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,largest,smallest,temp,i;
    cout<<"enter the array size: ";
    cin>>num;
    int array[num];
    cout<<"enter array elements: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    smallest=array[0];
    largest=array[0];
    for(i=0;i<num;i++){
        if(smallest>array[i]){
            temp=array[i];
            array[i]=smallest;
            smallest=temp;
        }
        if(largest<array[i]){
            temp=array[i];
            array[i]=largest;
            largest=temp;
        }
    }
    cout<<"Largest element is: "<<largest<<endl;
    cout<<"Smallest element is: "<<smallest;
    return 0;
}