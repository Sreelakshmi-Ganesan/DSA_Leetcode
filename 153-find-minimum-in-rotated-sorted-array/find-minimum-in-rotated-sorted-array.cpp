class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=INT_MAX;
        int low=0,high=nums.size()-1;
        while(low<=high)
        {
            int mid= (low+high)/2;
            if(nums[low]<=nums[high])
            {
                ans=min(nums[low],ans);
                break;
            }
            if(nums[low]<=nums[mid]) // sorted left  
            {
               
               if(nums[low]<ans)
               {
                ans=nums[low];
                
               }
              low=mid+1;
            } 
            else{
                 
               if(nums[mid]<ans)
               {
                ans=nums[mid];
               
               } high=mid-1;
            }
        }
        return ans;
    }
};