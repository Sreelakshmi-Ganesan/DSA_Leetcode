int getMinDistance(int* nums, int numsSize, int target, int start) {
 int count[10001]={0};
 for(int i=0;i<numsSize;i++)
 {
    if(nums[i]==target)
    count[i]++;
 }
 int min=INT_MAX;
 for(int i=0;i<10001;i++)
 {
    if(count[i]==1)
    { 
      if(abs(i-start)<min)
      min=abs(i-start);
    }
 }
 return min;
}