#include <bits/stdc++.h>
#include <iostream>
#include <array>
using namespace std;
int search(int arr[],int n,int element)
{
    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        pos=1;
    }
    return pos;

}
int main()
{
    int element;
    int n;
    int arr[n];
    cout<<"enter the size of the array:-"<<endl;
    cin>>n;
    cout<<"enter the element of the array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the elements you want to find"<<endl;
    cin>>element;
    int a=search(arr,n,element);
    if(a==1)
    cout<<"element found"<<endl;
    else 
    cout<<"element not found"<<endl;
    return 0;
}