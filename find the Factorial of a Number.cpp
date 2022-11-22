#include<iostream>
using namespace std;
int fact(int x)
{
    int temp = 1;
    for(int i = 1; i <= x; i++)
    {
        temp = temp * i;
    }
    cout<<temp;
    return 0;
}
int main()
{       
    fact(7);
    return 0;
}
