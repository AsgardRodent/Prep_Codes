#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
    int fact = 1;
    for(int i = x; i >= 1; i--)
    {
        fact*=i;
    }
    return fact;
}
int possibilities(int x,int y)
{
    int a,b,c,res=0;
    a = fact(x);
    b = fact(x-y);
    res = a/b;
    cout<<"possibilities are :"<<res;
    return 0;
}
int main()
{   
    int a,b;
    cout<<"Enter N :: ";
    cin>>a;
    cout<<"Enter P :: ";
    cin>>b;
    possibilities(a,b);
}
