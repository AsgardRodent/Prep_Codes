#include<bits/stdc++.h>
using namespace std;
int bi(int x)
{
    int a[32];
    int i = 0;
    while(x > 0)
    {
        a[i] = x%2;
        x = x / 2;
        i++;
    }
    cout<<"Binary number is :";
    for(int j = i-1; j >= 0; j--)
    {
        cout<<a[j];
    }
    return 0;
}
int main()
{   
    int x;
    cout<<"Enter Decimal Number :: ";
    cin>>x;
    bi(x);
}
