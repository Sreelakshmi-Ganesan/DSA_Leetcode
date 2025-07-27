class Solution {
public:
    
    long long rob(vector<int>& nums) {
        int n=nums.size();
        vector<long long>dp(n,-1);
        dp[0]=nums[0];
        int neg=0;
        for(int i=1;i<n;i++)
        {
            int pick=nums[i];
            if(i>1) pick+=dp[i-2];
            int nopick=0+dp[i-1];
            dp[i]=max(pick,nopick);
        }
        return dp[n-1];
        
    }
};