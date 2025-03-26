int smallestEqual(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==(i%10))
        return i;
    }
    return -1;

}