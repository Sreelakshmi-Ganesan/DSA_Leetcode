class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int mid=0,low=0;
        int high=n-1;
        // 0- low-1  : 0
        //low - mid-1 : 1
        // mid - high : unsorted
        //high+1 - n-1 : 2
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if( nums[mid]==1)
            {
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};