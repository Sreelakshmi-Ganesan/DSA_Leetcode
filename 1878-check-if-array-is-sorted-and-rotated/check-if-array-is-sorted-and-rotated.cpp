class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n+n);
        for(int i=0;i<n;i++)
        {
            arr[i]=nums[i];
            arr[i+n]=nums[i];
        }

        int ct=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]<=arr[i+1])
            {ct++;
            
            if(ct==n)return true;
            }
            else ct=1;
            
        }
        
        return false;
    }
};