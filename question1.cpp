#include <bits/stdc++.h>
#include <iostream>
#include <array>
using namespace std;
int findlargest(int arr[],int n)
{
    int maximum=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>maximum)
        maximum=arr[i];
    }
    return maximum;
}
int main()
{
    int n;
    int arr[n];
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the elements of the array:- "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=findlargest(arr,n);
    cout<<"the largest no.="<<max<<endl;
    return 0;
}
