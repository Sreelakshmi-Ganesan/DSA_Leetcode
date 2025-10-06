class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       map<int,int>mp;
       mp[0]=1;  // there 1 empty subarray with sum 0 at begining
       int prefixsum=0,ct=0;
       for(int i=0;i<n;i++)
       {
         prefixsum+=nums[i];
        int rem=prefixsum-k;
        ct+=mp[rem];    // if there is rem in map , then add its no of occurings to count
        mp[prefixsum]+=1;  
       } 
       return ct;
    }

};