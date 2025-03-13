bool isMonotonic(int* nums, int numsSize) {
    int flag1=1,flag2=1;
    if(numsSize<=2)
    return true;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]>nums[i+1])
        flag1=0;
         if(nums[i]<nums[i+1])
        flag2=0; 
    }
    
    if(flag1==1 || flag2==1)
    return true;
    else return false;
}