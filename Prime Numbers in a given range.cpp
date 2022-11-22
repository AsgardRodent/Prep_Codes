#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"The Prime Numbers Between "<<a<<" and "<<b<<" are:\n";
    for(int i = a; i <= b; i++)
    {
        if(i%2==1)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}
