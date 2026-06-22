// Write a program to Count words in a sentence.
#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    int i,count=1;
    cout<<"enter the sentence to check for: ";
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout<<"Number of words in a sentence are: "<<count;
    return 0;
}