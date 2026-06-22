// Write a program to Character frequency.
#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    int i,j,count;
    cout<<"enter the string to check for: ";
    gets(str);
    int size=strlen(str);
    for(i=0;i<size;i++){
        count=1;
        for(j=i+1;j<size;j++){
            if(str[i]==str[j] && str[i]!=' '){
                count++;
                str[j]='0';
            }
        }
        if(str[i]!=' ' && str[i]!='0'){
            cout<<"Frequency of "<<str[i]<<" is: "<<count<<endl;
        }
    }
    return 0;
}
