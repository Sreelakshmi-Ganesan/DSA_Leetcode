class Solution {
public:
    int f(vector<int>&arr,int n)
    { vector<int>dp(n);
      dp[0]=arr[0];
      for(int i=1;i<n;i++)
      {
        int take=arr[i];
        if(i>=2) take+=dp[i-2];
        int notake=0+dp[i-1];
        dp[i]=max(take,notake);
      }
      return dp[n-1];

    }
    int rob(vector<int>& nums) {
       int n=nums.size();
       if(n ==1) return nums[0];
       vector<int>temp1;
       vector<int>temp2;
       for(int i=0;i<n;i++)
       {
        if(i!=0) temp1.push_back(nums[i]);
        if(i!=n-1) temp2.push_back(nums[i]);
       }
       int t1=f(temp1,temp1.size());
       int t2=f(temp2,temp2.size());
       return max(t1,t2);
    }
};