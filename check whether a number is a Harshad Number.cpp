#include<iostream>
using namespace std;
int sumdt(int x)
{
    int sum = 0;
    while(x!=0)
    {
        int temp;
        temp = x%10;
        sum = sum + temp;
        x = x / 10;
    }
    return sum;
}
int harshad(int x)
{
    int a;
    a = sumdt(x);
    if(x % a == 0)
    {
        cout<<"It is a Harshad Number";
    }
    else
    {
        cout<<"It is not a Harshad Number";
    }
    return 0;
}
int main()
{   
    int a;
    cout<<"Enter the number to check :: ";
    cin>>a;
    harshad(a);
}
