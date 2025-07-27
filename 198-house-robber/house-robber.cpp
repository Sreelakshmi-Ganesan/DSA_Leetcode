class Solution {
public:
    
    long long rob(vector<int>& nums) {
        int n=nums.size();
        long long prev1=nums[0];
        long long prev2=0;
        
        for(int i=1;i<n;i++)
        {
            int pick=nums[i];
            if(i>1) pick+=prev2;
            int nopick=0+prev1;
             long long curr= max(pick,nopick);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
        
    }
};