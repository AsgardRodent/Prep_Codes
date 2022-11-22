#include<iostream>
using namespace std;
int fact(int x)
{
    int a = 1,temp=0;
    while(a < x)
    {
        if(x % a == 0)
        {
            temp = temp + a;
        }
        a++;
    }
    return temp;
}
int abun(int x)
{
    int a;
    a = fact(x);
    if(a > x)
    {
        cout<<"It is a abundant number";
    }
    else
    {
        cout<<"It is not a abundant number";
    }
    return 0;
}
int main()
{   
    int a;
    cout<<"Enter the number to check :: ";
    cin>>a;
    abun(a);
}
