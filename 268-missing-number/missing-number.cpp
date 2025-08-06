class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int xorn=0; 
        int xorall=0;
        for(int i=0;i<nums.size();i++)
        {
            xorn^=nums[i];
            xorall^=(i+1);
        }
        //xorall^=nums.size();
        return xorn^xorall;
    }
};