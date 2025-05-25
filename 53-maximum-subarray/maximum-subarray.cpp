class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=INT_MIN;
        int SAstart=-1,SAend=-1;
        int start=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(sum==0)
            start=i;
            sum=sum+nums[i];
            
            if(sum>maxi)
            {
                maxi=sum;
                SAstart=start;
                SAend=i;
            }
            if(sum<0)
            sum=0;
        }
        return maxi;
        
    }
};