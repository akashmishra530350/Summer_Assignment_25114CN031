// Write a program to Find pair with given sum.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,i,j,sum;
    cout<<"enter the size of array: ";    
    cin>>num;
    int array[num];
    cout<<"enter the array element: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    cout<<"enter the sum to check for: ";
    cin>>sum;
    cout<<"sum pair is: ";
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(array[i]+array[j]==sum){
                cout<<array[i]<<" "<<array[j]<<endl;
            }
        }
    }
    return 0;
}