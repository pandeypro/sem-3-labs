#include <bits/stdc++.h>
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int arrange(int arr[], int size)
{
    int a;
    sort(arr, arr + size);
    cout << "enter 1 for ascending and enter 2 for decending" << endl;
    cin >> a;
    if (a == 1)
    {
        cout << "array in ascending order" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }
    else if (a == 2)
    {
        cout << "array in decending order" << endl;
        for (int i = size; i > 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
    else
        cout << "wrong choice" << endl;
    return 0;
}
int main()
{
    int n;
    int arr[n];
    cout << "enter the size of the array" << endl;
    cin >> n;
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arrange(arr, n);
    return 0;
}