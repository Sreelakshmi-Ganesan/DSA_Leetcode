class Solution { /// s1=s2=s/2. so we have to check if there is any subset with sum s/2
public:
    bool f(int ind,vector<int>&nums,int sum,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(sum==0 && nums[0]==0) return true;
            if(sum==0 || nums[0]==sum) return true;
            return false;
        }
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        bool not_take=f(ind-1,nums,sum,dp);
        bool take=false;
        if(sum>=nums[ind]) take=f(ind-1,nums,sum-nums[ind],dp);
         return dp[ind][sum]=take|not_take;
    }
    bool canPartition(vector<int>& nums) {
      int n=nums.size();
      int sum=0;
      for(int it: nums)
      sum+=it;
      if(sum%2 ==1) return false;
      sum=sum/2;
      vector<vector<int>>dp(n,vector<int>(sum+1,-1));
      return f(n-1,nums,sum,dp);
    }

};