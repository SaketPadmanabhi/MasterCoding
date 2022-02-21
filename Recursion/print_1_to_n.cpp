
// This solution is a Backtracking Solution
#include<bits/stdc++.h>
using namespace std;
void printoneton(int num)
{
    if(num==0)
    {
        return;
    }
    printoneton(num-1);
    cout<<num<<" ";
}
int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    printoneton(n);
}

