class Solution {
public:
    void subsets(int ind, vector<int> candidates, int target,int n,vector<int>ds, vector<vector<int>>& res)
    {
        if(ind==n)
        {
            if(target==0)
            {
                res.push_back(ds);
            }
            return;
        }
        if(candidates[ind]<= target)
        {   ds.push_back(candidates[ind]);
            subsets(ind,candidates,target-candidates[ind],n,ds,res);
            ds.pop_back();
        }
        subsets(ind+1,candidates,target,n,ds,res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> res;
         vector<int> ds;
         subsets(0,candidates,target,candidates.size(),ds,res);
         return res;

    }
};