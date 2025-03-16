/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* res=(int *)malloc(numsSize*sizeof(int));
    int count[101]={0};
    for(int i=0;i<numsSize;i++)
    {
        count[nums[i]]++;
    }
    for(int i=1;i<101;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=0;i<numsSize;i++)
    {    if(nums[i]==0)
         res[i]=0;
         else
        res[i]=count[nums[i]-1];
    }
    *returnSize=numsSize;
    return res;
}