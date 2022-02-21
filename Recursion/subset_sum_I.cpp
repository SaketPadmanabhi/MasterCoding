#include<bits/stdc++.h>
using namespace std;
void subset_sum_I(int i,int arr[],vector<int>&ds,int sum,int n)
{
    if(i==n)
    {
        ds.push_back(sum);
        return;
    }
    subset_sum_I(i+1,arr,ds,sum+arr[i],n);
    subset_sum_I(i+1,arr,ds,sum,n);
}
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ind=0;
    vector<int> ds;
    int sum=0;
    subset_sum_I(ind,arr,ds,sum,n);
}
