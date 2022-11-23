#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Elements in the array\n";
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nThe array is:\t";
    for(int i = 0;i < n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nThe reverse of the array is :\t";
    for(int i = n-1;i >= 0;i--)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
