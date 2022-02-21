

//Backtracking for n to 1


#include<bits/stdc++.h>
using namespace std;
void printntoone(int i,int num)
{
    if(num==0)
    {
        return;
    }
    printntoone(i+1,num-1);
    cout<<i<<" ";
}
int main()
{
    cout<<"Enter a number\n";
    int n;
    cin>>n;
    int i=1;
    printntoone(i,n);
}