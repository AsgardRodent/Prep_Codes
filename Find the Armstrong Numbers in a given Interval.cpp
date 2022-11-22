#include<iostream>
using namespace std;
int cube(int x)
{
    int temp;
    temp = x*x*x;
    return temp;
}
int cubesum(int x)
{
    int temp = 0;
    while(x != 0)
    {
        temp = temp + cube(x%10);
        x = x/10;
    }
    return temp;
}
void armstrong(int x,int y)
{
    for(int i = x; i <= y; i++)
    {
       int temp;
       temp = i;
       temp = cubesum(temp);
       if(temp == i)
       {
           cout<<temp<<"\t";
       }
    }
}
int main()
{       
    armstrong(100,400);
    return 0;
}
