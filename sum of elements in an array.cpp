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
    int sum=0;
    for(int i = 0;i < n;i++)
    {
        sum += arr[i];
    }
    cout<<"\nThe sum of elements in the array is :"<<sum;
    return 0;
}
