// Write a program to Count even and odd elements.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,array[100],i,even=0,odd=0;
    cout<<"enter the size of array: ";
    cin>>num;
    cout<<"enter the array elements: ";
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    for(i=0;i<num;i++){
        if(array[i]%2==0)
            even++;
        else
            odd++;
    }
    cout<<"Number of EVEN elements are: "<<even<<endl;
    cout<<"Number of ODD elements are: "<<odd;
}