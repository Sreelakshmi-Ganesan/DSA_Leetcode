/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* res=(int *)malloc(numsSize*sizeof(int));
    int count=0;
    for(int i=0;i<numsSize;i++)
    {   count=0;
        for(int j=0;j<numsSize;j++)
        {   
            if(j!=i && nums[j]<nums[i])
            {
              count++;  
            }
            res[i]=count;
        }
    }
    *returnSize=numsSize;
    return res;
}