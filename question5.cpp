#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;
string replace01(int pos,char ch,string sh)
{
    for(int i=0;i<sh.length();i++)
    {
        if(i==pos-1)
        sh[i]=ch;
    }
    return sh;
}
int main()
{
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    int position;
    cout<<"enter the position where you want to enter"<<endl;
    cin>>position;
    char ch;
    cout<<"enter the character you want to enter "<<endl;
    cin>>ch;
    string s1=replace01(position,ch,s);
    cout<<"-------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxx-------------------------------"<<endl;
    cout<<"the new string is = "<<s1<<endl;
    return 0;
}