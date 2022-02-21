
// Always try to solve questions using functional recursion
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    int n;
    cout<<"Enter the number \n";
    cin>>n;
    cout<<fact(n);
    return 0;
}