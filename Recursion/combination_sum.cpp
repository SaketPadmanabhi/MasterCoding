// Leetcode Problem Number 39 - Combination Sum
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findcombination(int i,vector<int> &candidates,  int target,vector<int> &ls, vector<vector<int>> &ans)
    {
        if(i==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ls); // here we are pushing the list
            }
            return;
        }
        if(candidates[i]<=target)
        {
            ls.push_back(candidates[i]);
            findcombination(i,candidates,target-candidates[i],ls,ans); // take or pick the value as we can take the same value multiple times we don't need to increment the index
            ls.pop_back();
        }
        findcombination(i+1,candidates,target,ls,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans; // for the output to return the answer
        vector<int> ls; // for the function as we learned
        findcombination(0,candidates,target,ls,ans);
        return ans;
    }
};