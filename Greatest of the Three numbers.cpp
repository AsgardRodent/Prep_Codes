#include<iostream>
using namespace std;

int main()
{
    int a,b,c,temp;
    cin>>a>>b>>c;
    if(a > b && a > c)
    {
        temp = a;
    }
    else if (b > a && b > c) 
    {
        temp = b;
    }
    else 
    {
        temp = c;
    }
    cout<<"Greatest is: "<<temp;
    return 0;
}
