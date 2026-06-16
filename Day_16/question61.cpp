//  Write a program to Find missing number in array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i=0,j,count=0;
    cout<<"enter the size of array: ";
    cin>>num;
    int array[num];
    cout<<"enter the elements of array: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    cout<<"missing number in a array are: ";
    for(j=0;j<=num;j++){
        for(i=0;i<num;i++){
            if(j==array[i]){
                count++;
                break;
            }
        
        }
        if(count==0){
            cout<<j<<" ";
        }
        count=0;
    }
    
    
    return 0;
}