#include <iostream>
using namespace std;
int power(int B,int C)
{
    if(C==0)
    return B;
    else
    return (B*power(B,C-1));   
}
int main()
{
    int x,y;
    cout<<"enter the values of x and y"<<endl;
    cin>>x>>y;
    int a=power(x,y);
    cout<<"The Answer is = "<<a<<endl;
    return 0;
}