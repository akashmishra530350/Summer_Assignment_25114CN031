 // write a program to check whether a number is palindrome.
#include <iostream>                       
using namespace std;
int main(){
    int num,rem,reverse=0,original;
    cout<<"enter any number: ";
    cin>>num;
    original=num;
    while(num!=0){
        rem = num%10;
        reverse= reverse*10 + rem;
        num=num/10;
    }
    if(original==reverse)
        cout<<"number is palindrome.";
    else
    cout<<"number is not palindrome.";
    return 0;   

}