class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int ct=0;
      int n=nums.size();
      int  maxct=0;
      for(int i=0;i<n;i++)
      {
        if(nums[i]==1)
        {
            ct++;
            maxct=max(ct,maxct);
        }
        else{
            ct=0;
        }
      }   
      return maxct;

    }
};