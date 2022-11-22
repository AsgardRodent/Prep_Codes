#include<bits/stdc++.h>
using namespace std;

int fraction(int x,int y,int a, int b)
{
    int temp,res = 0;
    temp = (b*x) + (a*y);
    res =  (y*b);
    cout<<"The sum of fraction is :"<<temp<<"/"<<res;
    return 0;
}
int main()
{   
    int a,b,c,d;
    cout<<"Enter Numerator 1 : ";
    cin>>a;
    cout<<"Enter Denomenator 1 : ";
    cin>>b;
    cout<<"Enter Numerator 2 : ";
    cin>>c;
    cout<<"Enter Denomenator 2 : ";
    cin>>d;
    fraction(a,b,c,d);
}
