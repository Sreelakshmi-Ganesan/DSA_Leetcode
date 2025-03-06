void moveZeroes(int* nums, int numsSize) {
    int nonzero=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {nums[nonzero]=nums[i];
        nonzero++; }
    }
    while(nonzero<numsSize)
    {
        nums[nonzero]=0;
        nonzero++;
    }
}