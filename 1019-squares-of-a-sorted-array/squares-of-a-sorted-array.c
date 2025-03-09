/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int left=0,right=numsSize-1;
    int b[numsSize];
    for(int i=0;i<numsSize;i++)
    b[i]=nums[i];
    for(int i=0;i<numsSize;i++)
    nums[i]=0;
    int i=numsSize-1;
    while(left<=right)
    {
        if(abs(b[left])>abs(b[right]))
        {
            nums[i]=b[left];
            left++;
            i--;
        }
        else {
            nums[i]=b[right];
            right--;
            i--;
        }  
    } 
     for(int i=0;i<numsSize;i++)
    { 
        nums[i]=nums[i]*nums[i];
    }
*returnSize=numsSize;
        return nums;    

}