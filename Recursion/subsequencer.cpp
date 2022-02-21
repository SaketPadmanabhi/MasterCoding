
#include<bits/stdc++.h>
using namespace std;
void subsequencer(int i, int arr[], vector<int> &ls,int n)
{
    if(i==n)
    {
        for(auto it:ls)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    
    // not pick, or not take condition, this element is not added to your
    // subsequence
    subsequencer(i+1,arr,ls,n);
    ls.push_back(arr[i]);
    // take or pick the particular index into the subsequence
    subsequencer(i+1,arr,ls,n);
    ls.pop_back();
    
    
}

int main()
{
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter array elements\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector <int> ls;
    subsequencer(0,arr,ls,n);
}