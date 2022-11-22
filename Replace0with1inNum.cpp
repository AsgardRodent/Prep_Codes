#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a,b=0;
    cin>>a;
    while(a != 0)
    {
        int temp;
        temp = a % 10;
        if(temp == 0)
        {
            b = b + 1;
            b = b*10;
        }
        else
        {
            b = b + temp;
            b = b*10;
        }
        a = a/10;
    }
    while(b != 0)
    {
        int temp;
        temp = b % 10;
        a = a + temp;
        b = b / 10;
        a = a * 10;
    }
    a = a / 10;
    cout<<a;
}
