
#include<bits/stdc++.h>
using namespace std;
void reverse_array(int arr[], int l,int n)
{
    if(l>=n/2)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        return;
    }
    swap(arr[l],arr[n-1-l]);
    reverse_array(arr,l+1,n);
}

int main()
{
    cout<<"Enter the size of array\n";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l = 0;
    reverse_array(arr,l,n);
}