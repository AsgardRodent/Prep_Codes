#include<bits/stdc++.h>
using namespace std;
int decim(long long x)
{
    int a,b = 0,c,sum = 0;
    while(x != 0)
    {
        a = x%10;
        sum += a* pow(8,b);
        b++;
        x = x/10;
    }
    cout<<"\nThe Decimal number is: "<<sum;
    return 0;
}
int main()
{   
    long long x;
    cout<<"Enter Octal Number :: ";
    cin>>x;
    decim(x);
}
