class Solution {
public:
  void subset(int ind,vector<int>&nums,int target, int n, vector<int>&ds,vector<vector<int>> &res)
  {

        if(target==0)
        {   
            res.push_back(ds);
            return;
        }
    for(int i=ind;i<n;i++){
         if(i>ind && nums[i]==nums[i-1]) continue;
    if(nums[ind]>target) break;
    ds.push_back(nums[i]);
    subset(i+1,nums,target-nums[i],n,ds,res);
    ds.pop_back();
    }
    

  }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>res;
        sort(candidates.begin(),candidates.end());
    
        subset(0,candidates,target,candidates.size(),ds,res);
        
        return res;
        
    }
};