#include<bits/stdc++.h>
using namespace std;
int sumton(int num)
{
    if(num==0)
    {
        return 0;
    }
    return num + sumton(num-1);
}
int main()
{
    cout<<"Enter the number\n";
    int n;
    cin>>n;
    cout<<sumton(n);
}