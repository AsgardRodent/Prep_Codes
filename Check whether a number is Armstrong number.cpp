#include<iostream>
using namespace std;

int main()
{
    int a,rev=0,b;
    cin>>a;
    b = a;
    while(a != 0)
    {
        int temp;
        temp = a%10;
        temp = temp*temp*temp;
        cout<<temp<<"\t";
        rev = rev + temp;
        a = a/10;
    }
    cout<<"\nSum of cubes of its digits is: "<<rev<<"\nThe Original Number is: "<<b;
    if(b == rev)
    {
        cout<<"\nIt is a Armstrong Number";
    }
    else
    {
        cout<<"\nIt is not a Armstrong Number";
    }
    return 0;
}
