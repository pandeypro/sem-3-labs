#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <array>
using namespace std;
void combine(char str1[], char str2[])
{
    int i = 0;
    int j = 0;
    char *s1 = str1;
    char *s2 = str2;
    while (str1[i] != '\0')
    {
        ++s1;
        i++;
    }
    while (str2[j+1] != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    cout<<str1<<endl;
}
int main()
{
    char str1[100];
    char str2[100];
    cout << "enter the first string" << endl;
    cin >> str1;
    cout << "enter the second string" << endl;
    cin >> str2;
    combine(str1, str2);
    return 0;
}