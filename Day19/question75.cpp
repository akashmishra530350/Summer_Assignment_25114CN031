// Write a program to Transpose matrix.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int r1,c1,i,j;
    cout<<"enter the order of matrix: ";
    cin>>r1>>c1;
    int matrix[r1][c1];
    cout<<"enter the elements of matrix: ";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>matrix[i][j];
        }
    }
    int transpose[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    cout<<"Transpose matrix is: ";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}