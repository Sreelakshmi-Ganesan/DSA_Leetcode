class Solution {
public:
    void subset(int ind ,vector<int>& ds, vector<int>&nums , int n,vector<vector<int>>&res) 
    {
        if(ind==n)
        {
           res.push_back(ds);
            return;
        }

        ds.push_back(nums[ind]);
        subset(ind+1,ds,nums,n,res);
        ds.pop_back();
        subset(ind+1,ds,nums,n,res);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
     vector<int>ds;
     vector<vector<int>>res;
     
      subset(0,ds,nums,nums.size(),res);
      return res;
    }
};