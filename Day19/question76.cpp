// Write a program to Find digonal sum.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int r1,c1,i,j,sum1=0,sum2=0;
    cout<<"Enter the order of matrix: ";
    cin>>r1>>c1;
    cout<<"enter the elements of matrix: ";
    int matrix[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Primary diagonal elements are: ";
    for(i=0;i<r1;i++){
        cout<<matrix[i][i]<<" ";
        sum1=sum1+matrix[i][i];
    }
    cout<<"\n"<<"sum of Primary diagonal element is :"<<sum1<<endl;
    return 0;
}