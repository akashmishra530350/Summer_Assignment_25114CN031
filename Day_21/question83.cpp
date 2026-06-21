// Write a program to Count vowels and consonants.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string word;
    int i=0,count_vow=0,count_con=0;
    cout<<"enter the string to check for: ";
    cin>>word;
    while(word[i]!=0){
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
            count_vow++;
        }
        else
        {count_con++;
        }
        i++;
    }
    cout<<"VOWELS in a string are: "<<count_vow<<endl;
    cout<<"CONSONANTS in a string are: "<<count_con;
    return 0;
}