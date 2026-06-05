class Solution {
public:
     int f(vector<int>&nums, int ind,vector<int>&dp)
     {  if(ind<0) return 0; // case of empty array , n=0 then n-1 =-1 
        if(ind==0) return nums[0];
        if(ind==1) return max(nums[0],nums[1]);
        if(dp[ind]!=-1) return dp[ind];
        
        int notake=f(nums,ind-1,dp)+0;
        int take=INT_MIN;
        if(ind>=2) take=f(nums,ind-2,dp)+nums[ind];
        return dp[ind]= max(take,notake);
        /*

        if(ind < 0) return 0;

        if(ind == 0) return nums[0];

        int take = nums[ind] + f(nums, ind-2);

        int notake = f(nums, ind-1);

        return max(take, notake);
        */
    
     }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return f(nums,n-1,dp);
    }
};