class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int ct=0;
        for(int i=0;i<n-1;i++)  // there will be atmost 1 elem which is gt its next elem in a sorted rotated array
        {
            if(nums[i]>nums[i+1])
             ct++;    
        }    
        if(nums[n-1]>nums[0])
        ct++;

        return (ct<=1);   // ct<= 1  is also fine
         // if there is more than 1 elem that is gt its next elem then its not sorted and rotated
        
    
    }
};