#include<iostream>
using namespace std;
int sq(int x)
{
    int temp;
    temp = x * x;
    return x;
}
int autod(int x)
{
    int temp;
    temp = sq(x);
    while(x != 0)
    {
        if(x%10 != temp%10)
        {
            cout<<"\nNO";
        }
        x = x/10;
        temp = temp/10;
    }
    cout<<"\nYES";
    return 0;
}
int main()
{   
    int a;
    cout<<"Enter the number to check :: ";
    cin>>a;
    autod(a);
    return 0;
}
