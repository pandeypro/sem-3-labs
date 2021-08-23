#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 struct times
{
     int h, m, s;
} ;
void difference(times t1 , times t2 )
{ times dif ;
    if(t1.s < t1.s)
    {
        t1.s = t1.s+60;
        t1.m=t1.m-1;
    }
    if(t1.m<t2.m)
    {
        t1.m=t1.m+60;
        t1.h=t1.h-1;
    }
    if(t1.h<t2.h)
    {
        t1.h=t1.h+12;
    }
    dif.h=t1.h-t2.h;
    dif.m=t1.m-t2.m;
    dif.s=t1.s-t2.s;
    cout<<"the difference between the time is "<<dif.h<<":"<<dif.m<<":"<<dif.s<<endl;
}
int main()
{
    times t1,t2;
    cout<<"enter the first time"<<endl;
    cin>>t1.h>>t1.m>>t1.s;
    cout<<"enter the second time"<<endl;
    cin>>t2.h>>t2.m>>t2.s;
    difference(t1 , t2 );
    return 0;
}