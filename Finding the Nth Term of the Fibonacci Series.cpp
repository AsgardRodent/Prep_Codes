#include<iostream>
using namespace std;
int addboy(int x, int y)
{
    int temp;
    temp = y + x;
    return temp;
}
int fibonacci(int x)
{
    int a = 0,b=1,c;
    cout<<a<<","<<b<<",";
    for(int i = 2;i <= x;i++)
    {
        c = addboy(a,b);
        a = b;
        b = c;
    }
    cout<<"\nthe Nth term"<<"("<<x<<")"<<" is: "<<c;
    return 0;
}
int main()
{       
    fibonacci(2);
    return 0;
}
