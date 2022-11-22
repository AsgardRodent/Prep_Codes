#include<iostream>
using namespace std;
int fact(int x)
{
    int sum=0;
    for(int i = 1; i < x;i++)
    {
        if(x % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int res(int x)
{
    int a,b;
    a = fact(x);
    b = a/x;
    return b;
}
int pairF(int x,int y)
{
    int a,b;
    a = res(x);
    b = res(y);
    if(a == b)
    {
        cout<<"\nIt is Friendly Pair";
    }
    else
    {
        cout<<"\nIt is not a Friendly Pair";
    }
    return 0;
}
int main()
{   
    int a,b;
    cout<<"Enter the number 1 to check :: ";
    cin>>a;
    cout<<"Enter the number 2 to check :: ";
    cin>>b;
    pairF(a,b);
}
