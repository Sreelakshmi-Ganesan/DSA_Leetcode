int missingNumber(int* nums, int numsSize) {
    int maxi=INT_MIN, mini=INT_MAX,sum=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>maxi)
            maxi=nums[i];
        if(nums[i]<maxi)
            mini=nums[i];
         sum+=nums[i];   
    }
    int arrsum=((numsSize)*(numsSize+1))/2;
    return arrsum-sum;
}