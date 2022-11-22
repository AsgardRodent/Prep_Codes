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
    int a = 0,b=1;
    cout<<a<<","<<b<<",";
    for(int i = 0;i < x;i++)
    {
        int c;
        c = addboy(a,b);
        a = b;
        b = c;
        cout<<c<<",";
    }
    return 0;
}
int main()
{       
    fibonacci(10);
    return 0;
}
