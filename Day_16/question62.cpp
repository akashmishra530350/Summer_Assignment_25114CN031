// Write a program to Find maximum frequency element.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i,j,count=0,max_frequency,large=0;
    cout<<"enter the size of array: ";
    cin>>num;
    int array[num];
    cout<<"enter the elements of array: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    for(i=0;i<num;i++){
        count=0;
        for(j=0;j<num;j++){
            if(array[j]==i){
                count++;
            }
        }
        if(count>large){
            large=count;
            max_frequency=i;
        }
    }
    cout<<"Maximum frequency element is : "<<max_frequency<<endl;
    cout<<"Having frequency of : "<<large;
    return 0;
}