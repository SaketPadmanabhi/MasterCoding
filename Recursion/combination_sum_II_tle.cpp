//The catch in this code is to have a hashset as a answer and convert it to a vector<vector<int>>
/*This code will run but if the initial input is all the same digit and 
then the recursion will result into a function stack full 
i.e. TLE Error so we need to eliminate the repeating function recalls*/

// See the solution of combination_sum_II_correct
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findcombinations(int i,vector<int>& candidates,int target, vector<int>& ds, set<vector<int>>& ans)
    {
        if(i==candidates.size() || target < 0 || target == 0)
        {
            if(target==0)
            {
                ans.insert(ds);
            }
            if(target<0)
            {
                return;
            }
            return;
        }
        
        if(candidates[i]<=target)
        {
            ds.push_back(candidates[i]);
            findcombinations(i+1,candidates,target-candidates[i],ds,ans);          
            ds.pop_back();
        }
        findcombinations(i+1,candidates,target,ds,ans);
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(),candidates.end());
        set<vector<int>> ans;
        vector<int> ds;
        findcombinations(0,candidates,target,ds,ans);
        vector<vector<int>> final_1;
        
        for (auto it = ans.begin();
         it != ans.end();
         it++)
        {
            final_1.push_back(*it);
        }
        return final_1;
    }
};