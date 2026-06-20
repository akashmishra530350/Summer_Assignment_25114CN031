// Write a program to Check symmetric matrix.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int order,r1,c1,i,j,x=0,y=0;
    cout<<"enter order of matrix: ";
    cin>>r1>>c1;
    int matrix[r1][c1];
    cout<<"enter the elements of matrix: ";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>matrix[i][j];
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            if(matrix[i][j]!=matrix[j][i]){
                x=1;
            }
        }
    }
    if(x==0){
        cout<<"Matrix is symmetric.";
    }
    else{
        cout<<"Matrix is NOT symmetric.";
    }
    return 0;
}
