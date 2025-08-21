class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=m-1,r=n-1;
        int x=m+n-1;
        while(r>=0)
        {
            if(l>=0 && nums1[l]>nums2[r])
            {
                nums1[x]=nums1[l];
                l--;
                x--;
            }
            else{
                 nums1[x]=nums2[r];
                 x--;
                 r--;
            } 

         }
        

    }
};