#include<bits/stdc++.h>
using namespace std;
int ispalin(int x)
{
    int temp,rev=0;
    temp = x;
    while( x != 0)
    {
        int a;
        a = x%10;
        rev = rev*10 + a;
        x= x/10;
    }
    if(temp == rev)
    {
        return 1;
    }
    return 0;
}
int longpalin(int a[],int x,int y)
{
    for(int i = 0;i < x;i++)
    {
        if(ispalin(a[i]) && y < a[i])
        {
            y = a[i];
        }
    }
    if(y == INT_MIN)
    {
        y = -1;
    }
    cout<<"\nThe Longest palindrome is :\t"<<y;
    return 0;
}
int main()
{
    int a;
    int arr[] = {1, 121, 55551, 545545, 10111, 90};
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<"The size of array is :\t"<<n;
    a = INT_MIN;
    longpalin(arr,n,a);
}
