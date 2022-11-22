#include<iostream>
using namespace std;
int factorial(int x)
{
    int fact = 1;
    for(int i = 1;i <= x;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int strong(int x)
{
    int a,b = 0;
    a = x;
    while(a != 0)
    {
        int temp;
        temp = a%10;
        temp = factorial(temp);
        b = b + temp;
        a = a/10;
    }
    cout<<b;
    return 0;
}
int main()
{   
    strong(145);
    return 0;
}
