#include<iostream>
using namespace std;
int lcm(int x,int y)
{
    int a,temp;
    temp = (x > y)? x : y;
    for(int i = temp; i <= x*y; i++)
    {
        if(i%x == 0 && i%y == 0)
        {
            a = i;
            break;
        }
    }
    cout<<"LCM of "<<x<<" & "<<y<<" is: "<<a;
    return 0;
}
int main()
{   
    int a,b;
    cout<<"Enter the number 1 to check :: ";
    cin>>a;
    cout<<"Enter the number 2 to check :: ";
    cin>>b;
    lcm(a,b);
}
