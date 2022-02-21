
#include<bits.stdc++.h>
using namespace std;
class Solution {
public:
    void findcombinations(int i,vector<int>& candidates,int target, vector<int>& ds, vector<vector<int>>& ans)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        } 
        for(int j=i;j<candidates.size();j++)
        {
            if(j>i && candidates[j]==candidates[j-1]) continue;
            if(candidates[j]>target) break;
            ds.push_back(candidates[j]);
            findcombinations(j+1,candidates,target-candidates[j],ds,ans);  
            ds.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findcombinations(0,candidates,target,ds,ans);  
        return ans;
    }
};