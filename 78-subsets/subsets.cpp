class Solution {
    private:
    void allsubsets(int ind,int n,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ind==n)
         { ans.push_back(ds);
           return ; 
         }
         ds.push_back(nums[ind]);
         allsubsets(ind+1,n,nums,ds,ans);
         ds.pop_back();
         allsubsets(ind+1,n,nums,ds,ans);
       
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        allsubsets(0,n,nums,ds,ans);
        return ans;
    }
};