#include<bits/stdc++.h>
using namespace std;
int handshakes(int x)
{
    int a,b,c,res=0;
    a = x;
    b = x-1;
    c = a*b;
    res = c/2;
    cout<<"Total handshakes are :"<<res;
    return 0;
}
int main()
{   
    int a;
    cout<<"Enter No of people :: ";
    cin>>a;
    handshakes(a);
}
