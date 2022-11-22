#include<bits/stdc++.h>
using namespace std;
int hex(string x)
{
    int a,b = 16;
    a = stoi(x,0,16);
    cout<<"The Decimal number is :"<<a;
    return 0;
}
int main()
{   
    string x;
    cout<<"Enter Hex Number :: ";
    cin>>x;
    hex(x);
}
