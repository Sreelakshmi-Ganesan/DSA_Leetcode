class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> num1;
        for(int num : nums1)
        num1.insert(num);
        unordered_set<int>intersec;
        vector<int>res;
        for(int num : nums2)
        {
           if(num1.count(num))
           intersec.insert(num);
        }
        for(auto num :intersec)
        res.push_back(num);
         
         return res;

    }
};