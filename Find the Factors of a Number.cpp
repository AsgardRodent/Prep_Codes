#include<iostream>
using namespace std;
int factor(int x)
{
    cout<<"The factors are given below :\n";
    for(int i = 1;i <= x; i++)
    {
        if(x%i == 0)
        {
            cout<<i<<"\t";
        }
    }
    return 0;
}
int main()
{   
    int a;
    cin>>a;
    factor(a);
    return 0;
}
