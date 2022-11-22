#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cin>>a>>b;
    if(a > b)
    {
        temp = a;
    }
    else
    {
        temp = b;
    }
    cout<<"Greatest is: "<<temp;
    return 0;
}
