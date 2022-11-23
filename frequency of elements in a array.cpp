#include<bits/stdc++.h>
using namespace std;
int freq(int a[],int x,int y)
{
    int temp = 0;
    for(int i = 0; i < x;i++)
    {
        if(a[i] == y)
        {
            temp++;
        }
    }
    cout<<"\nOccarance ::\t"<<temp;
    return 0;
}
int main()
{
    int a;
    int arr[] = {1,1,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<"The size of array is :\t"<<n;
    cout<<"\nEnter the number to check :\t";
    cin>>a;
    freq(arr,n,a);
}
