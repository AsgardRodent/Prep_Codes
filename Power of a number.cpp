#include<iostream>
using namespace std;
int power(int x,int y)
{
    int a = x;
    for(int i = 1; i < y; i++)
    {
       a = a * x;
    }
    cout<<"\nPower :: "<<a;
    return 0;
}
int main()
{   
    int a,b;
    cout<<"\nEnter the base: ";
    cin>>a;
    cout<<"\nEnter the Exponent: ";
    cin>>b;
    power(a,b);
    return 0;
}
