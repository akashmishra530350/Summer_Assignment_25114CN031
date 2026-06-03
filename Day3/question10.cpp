// write a program to print prime number in a range.
#include <iostream> 
using namespace std;
int main(){
    int num1,num2,i,j;
    cout<<"enter the range of number: ";
    cin>>num1>>num2;
    for(i=num1+1;i<num2;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                cout<<"";
                break;
            }
        }
    if(i==j){
        cout<<i<<" ";
    }
    }
    return 0;
}