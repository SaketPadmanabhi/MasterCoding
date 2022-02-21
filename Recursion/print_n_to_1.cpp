
//This is not Backtracking
#include<bits/stdc++.h>
using namespace std;
void printntoone(int num)
{
    if(num==0)
    {
        return;
    }
    cout<<num<<" ";
    printntoone(num-1);
    
}
int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    printntoone(n);
}