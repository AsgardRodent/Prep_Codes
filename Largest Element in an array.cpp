#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],max=0;
    int n;
    cout<<"Enter how many numbers";
    cin>>n;
    for(int i = 0; i < n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n;i++)
    {
        cout<<arr[i]<<",";
    }
    for(int i = 0;i < n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<"\nMax is: "<<max;
    
    return 0;
}
