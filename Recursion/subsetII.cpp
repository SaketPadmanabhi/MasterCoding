/*Here the base case is not required because, in the for loop itself we are checking and limiting the size of n*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void finduniquesets(int i,vector<int> &nums,vector<int> &ds,vector<vector<int>>& ans,int n)
    {
        ans.push_back(ds);
        for(int j=i;j<nums.size();j++)
        {
            if(j>i && nums[j]==nums[j-1]) continue;
            ds.push_back(nums[j]);
            finduniquesets(j+1,nums,ds,ans,n);
            ds.pop_back();    
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        finduniquesets(0,nums,ds,ans,nums.size());
        return ans;
    }
};