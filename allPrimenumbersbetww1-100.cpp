#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=1,b=100;
    cout<<"Prime Numbers Between 1 to 100 is:\n";
    for(int i = a; i <= b; i++)
    {
        if(i%2 == 1)
        {
            cout<<i<<",";
        }
    }
    return 0;
}
