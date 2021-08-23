#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int checkprime(int n)
{
    int i;
    if(n<=1)
    return 1;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout<<"enter the number you want to check"<<endl;
    cin>>n;
    int a=checkprime(n);
    if(a==1)
    cout<<"prime"<<endl;
    else 
    cout<<"not prime"<<endl;
    return 0;
}