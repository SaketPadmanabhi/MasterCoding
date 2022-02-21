#include<bits/stdc++.h>
using namespace std;
void sumton(int i,int num,int sum)
{
    if(num==0)
    {
        cout<<sum;
        return;
    }
    sumton(i+1,num-1,sum+i);
}

int main()
{
    cout<<"Enter the number\n";
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    sumton(i,n,sum);
}



