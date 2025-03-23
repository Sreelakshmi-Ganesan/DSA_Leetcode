int arraySign(int* nums, int numsSize) {
    int negc=0;
    for(int i=0;i<numsSize;i++)
    {
         if(nums[i]<0)
          negc++;
        if(nums[i]==0)
        return 0;
    }
    
     if (negc%2==1) 
    return -1;
    else 
    return 1;

}