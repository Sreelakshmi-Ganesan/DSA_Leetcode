class Solution {
public:
    int fun(vector<int>&nums,int k)
    {
        if(k<0) return -1;
        int l=0,r=0,ct=0;
        int n=nums.size();
        int sum=0;
        while(r<n)
        {
            sum=sum+(nums[r]%2);
            while(sum>k)
            {
                sum=sum-(nums[l]%2);
                l++;
            }
            ct=ct+(r-l+1);
            r++;
        }
        return ct;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int x=fun(nums,k);
        int y=fun(nums,k-1);
        return x-y;
    }
};