int dominantIndex(int* nums, int numsSize) {
    int maxi=INT_MIN,index=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>maxi)
        {
            maxi=nums[i];
            index=i;
        }
    }
    int flag=-1;
    for(int i=0;i<numsSize;i++)
    {
        if(i!=index && maxi>=2*nums[i])
        {
            flag=index;
        }
        else if (i!=index && maxi<2*nums[i] )
        {flag=-1;
          break;}
    }
    
    return flag;
}