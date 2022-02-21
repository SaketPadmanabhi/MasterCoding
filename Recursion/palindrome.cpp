// check this code on video

#include<bits/stdc++.h>
using namespace std;
 bool palindrome(string s, int l)
{
    if(l>=s.length()/2) return 1;
    if(s.at(l)!=s.at(s.length()-l-1)) return 0;
    palindrome(s,l+1);
    
}
int main()
{
    string s;
    cout<<"Enter String\n";
    cin>>s;
    int l=0;
    cout<< palindrome(s,l);

}