// Write a program to Subtract matrices.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int r1,c1,i,j;
    cout<<"enter the order of matrix: ";
    cin>>r1>>c1;
    int array1[r1][c1];
    int array2[r1][c1];
    cout<<"enter the elements of first matrix: ";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>array1[i][j];
        }
    }
    cout<<"enter the elements of second matrix: ";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>array2[i][j];
        }
    }
    int subtract[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            subtract[i][j]= array1[i][j]+((-1)*array2[i][j]);
        }
    }
    cout<<"subtraction of matrix is: ";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<subtract[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}