void sortColors(int* nums, int numsSize) {
    
    int rc=0,wc=0,bc=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
         rc++;
         else if(nums[i]==1)
          wc++;
          else 
           bc++;
    }
    wc=wc+rc;
    bc=bc+wc;
   for(int i=0;i<rc;i++)
   nums[i]=0;
   for(int i=rc;i<wc;i++)
   nums[i]=1;
   for(int i=wc;i<bc;i++)
   nums[i]=2;
}