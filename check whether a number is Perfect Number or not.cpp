#include<iostream>
using namespace std;
int sumdiv(int x)
{
    int sum = 0;
    for(int i = 1;i < x; i++)
    {
        if(x%i==0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int perfect(int x)
{
    int a;
    a = sumdiv(x);
    if(a == x)
    {
        cout<<"It is a Perfect Number";
    }
    else
    {
        cout<<"It is not a Perfect Number";
    }
    return 0;  
}
int main()
{   
    int a;
    cout<<"Enter the number to check :: ";
    cin>>a;
    perfect(28);
    return 0;
}
