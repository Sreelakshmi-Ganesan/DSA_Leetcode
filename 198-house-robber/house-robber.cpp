class Solution {
public:
    long long maxsum(int ind,vector<int> &nums, int n,vector<long long>&dp)
    {
        if(ind==0) return nums[ind];
        if(ind<0) return 0;

        if(dp[ind]!=-1) return dp[ind];

        int pick=nums[ind] + maxsum(ind-2,nums,n,dp);
        int nopick=0+maxsum(ind-1,nums,n,dp);
        return dp[ind]=max(pick,nopick);
    }
    long long rob(vector<int>& nums) {
        int n=nums.size();
        vector<long long>dp(n,-1);
        return maxsum(n-1,nums,n,dp);
        
    }
};