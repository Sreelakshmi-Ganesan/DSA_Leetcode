class Solution {
public:
    int fun(vector<int> &nums,int goal)
    {   if(goal<0) return 0;
        int l=0,r=0,maxlen=0;
        int n=nums.size();
        int sum=0;
        int ct=0;
        while(r<n)
        { sum+=nums[r];
        while(sum>goal)
        {
            sum=sum-nums[l];
            l++;
        }
         ct=ct+(r-l+1);
         r++;
        }
        return ct;

    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int x=fun(nums,goal);
        int y=fun(nums,goal-1);
        return x-y;
    }
};