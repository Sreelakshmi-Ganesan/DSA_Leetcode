int findClosestNumber(int* nums, int numsSize) {
    int small=INT_MAX;
    for(int i=0;i<numsSize;i++)
    {
        if(abs(nums[i]-0)<abs(small))
          {small=nums[i];
          }
        else if(abs(nums[i]-0)==abs(small))
        {
            small=small>nums[i]?small:nums[i];
        }
                
    }
   return small;

}