#include<bits/stdc++.h>
using namespace std;
void rname(string name,int n)
{
    if(n==0)
    {
        return;
    }
    rname(name,n-1);
    cout<<name<<" "<<n<<"\n";
}

int main()
{
    string s;
    cout<<"Enter your name\n";
    cin>>s;
    int n;
    cout<<"\nNumber of times the name should be repeated\n";
    cin>>n;
    rname(s,n);
}