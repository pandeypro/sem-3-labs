#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;
void wordsearch(string str, string st1)
{
    int flag=0;
    string str2;
    int a = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==' ')
        {
            str2 = str.substr(a, i);
            if(st1.compare(str2))
            {
                flag=1;
            }
            else 
            a=i;
        }
    }
    if(flag==1)
    cout<<"match found"<<endl;
    else 
    cout<<"match not found"<<endl;
}
int main()
{
    string str;
    string word;
    cout << "enter the string" << endl;
    getline(cin, str);
    cout << "enter the word to be searched" << endl;
    cin >> word;
    wordsearch(str, word);
    return 0;
}
