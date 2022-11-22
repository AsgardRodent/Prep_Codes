#include<iostream>
using namespace std;
int hcf(int x,int y)
{
    int temp;
    for(int i = 1; i <= x || i <= y; i++)
    {
        if(x % i == 0 && y % i == 0)
        {
            temp = i;
        }
    }
    cout<<"HCF of "<<x<<" & "<<y<<" is: "<<temp;
    return 0;
}
int main()
{   
    int a,b;
    cout<<"Enter the number 1 to check :: ";
    cin>>a;
    cout<<"Enter the number 2 to check :: ";
    cin>>b;
    hcf(a,b);
}
