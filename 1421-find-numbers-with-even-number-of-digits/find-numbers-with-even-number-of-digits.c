int findNumbers(int* nums, int numsSize) {
    int digs=0,count=0;
    for(int i=0;i<numsSize;i++)
    {
         digs=(nums[i]==0)?1:log10(nums[i])+1;
        if((digs%2)==0)
        count++;

    }
    return count;
}