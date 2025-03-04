int singleNumber(int* nums, int numsSize) {
    int one=0;
    for(int i=0;i<numsSize;i++)
    {
        one=one^nums[i];;
    }
    return one;
}