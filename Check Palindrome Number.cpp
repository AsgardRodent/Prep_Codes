#include<iostream>
using namespace std;

int main()
{
    int a,rev=0;
    cin>>a;
    int b;
    b = a;
    while(a != 0)
    {
        rev = rev*10 + a%10;
        a = a/10;
    }
    cout<<rev<<"\n";
    cout<<b;
    if(b == rev)
    {
        cout<<"\nThe number is palindrome";
    }
    else
    {
        cout<<"\nThe number is not palindrome";
    }
    return 0;
}
