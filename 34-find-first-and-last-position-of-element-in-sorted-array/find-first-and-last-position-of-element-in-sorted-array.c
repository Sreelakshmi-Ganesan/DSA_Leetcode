/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int low=0,high=numsSize-1;
    int *res=(int*)malloc(2*sizeof(int));
     res[0]=-1;
     res[1]=-1;
    *returnSize=2;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(target==nums[mid])
         {
            res[0]=mid;
            high=mid-1;    
         }
    
    else if(target<=nums[mid])
    {
        high=mid-1;
    }
    else low=mid+1;
}
 low=0,high=numsSize-1;

while(low<=high)
    {
        int mid=(low+high)/2;
        if(target==nums[mid])
         {
            res[1]=mid;
            low=mid+1;    
         }
    
    else if(target<=nums[mid])
    {
        high=mid-1;
    }
    else low=mid+1;
}



return res; 
}
