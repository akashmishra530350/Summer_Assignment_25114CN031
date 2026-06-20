// Write a program to Find column-wise sum.
#include<iostream>
using namespace std;

int main()
{
int r, c, sum=0, csum=0;
cout<<"Enter rows and Column of Matrix: ";
cin>>r>>c;
int arr1[r][c];
cout<<"enter the elements of matrix: ";
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
cin>>arr1[i][j];
}
for(int i=0;i<r;i++)
{
csum =0;
for(int j=0;j<c;j++){
csum = csum + arr1[j][i];
}
cout<<csum<<"\t";
}
return 0;
}



