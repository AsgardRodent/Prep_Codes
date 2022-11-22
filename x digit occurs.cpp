#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a;
    cout<<"\nRepeated digit ? :: ";
    cin>>b;
    while(a!=0)
    {
        int temp;
        temp = a % 10;
        if(temp == b)
        {
            count++;
        }
        a = a /10;
    }
    cout<<"\nNo of Times Repeated :: "<<count;
    return 0;
}
