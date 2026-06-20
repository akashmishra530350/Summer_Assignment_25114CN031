// Write a program to Multiply matrices.
#include<iostream>
using namespace std;
int main()
{   int r1,c1,r2,c2;
    cout<<"enter the order of first matrix: ";
    cin>>r1>>c1;
    cout<<"enter the order of second matrix: ";
    cin>>r2>>c2;
    int mat1[r1][c1], mat2[r2][c2], mat3[r1][c2];
    int i, j, k, sum=0;
    cout<<"Enter  Elements for First Matrix: ";
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
            cin>>mat1[i][j];
    }
    cout<<"\nEnter Elements for Second Matrix: ";
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
            cin>>mat2[i][j];
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            sum=0;
            for(k=0; k<c2; k++)
                sum = sum + (mat1[i][k] * mat2[k][j]);
            mat3[i][j] = sum;
        }
    }
    cout<<"\nMultiplication Result:\n";
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
            cout<<mat3[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}