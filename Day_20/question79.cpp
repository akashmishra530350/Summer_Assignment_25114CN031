// Write a program to Find row-wise sum.
#include<iostream>
using namespace std;

int main()
{
int r, c, sum=0, rsum=0;
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
rsum =0;
for(int j=0;j<c;j++){
rsum = rsum + arr1[i][j];
}
cout<<rsum<<"\t";
}
return 0;
}
