// Write a program to find maximum occuring character.
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int count[256] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }
    int maxCount = 0;
    char maxChar;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxChar = i;
        }
    }
    cout << "Maximum occurring character: " << maxChar << endl;
    return 0;
}
    
