#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;
string rev(string sh)
{
    string s="";
    for(int i=sh.length()-1;i>=0;i--)
    {
        s=s+sh[i];
    }
    return s;
}
int main()
{
    string s="";
    cout<<"enter the string you want to be reversed"<<endl;
    getline(cin,s);
    string s1=rev(s);
    cout<<"the reverse string is = "<<s1<<endl;
    return 0;
}