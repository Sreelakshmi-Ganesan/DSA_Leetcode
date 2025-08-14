class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int maxlen=0;
       unordered_set<int>st; //to get unique elems
       int n=nums.size();
       for(int i=0;i<n;i++)
       st.insert(nums[i]);
       int ct=0;
        int first;
       for(auto it:st)
       {   
        if(st.find(it-1)==st.end()) // if prev element not in set
        {
            ct=1;
             first=it;
        }
        while(st.find(first+1)!=st.end())
        {
            ct++;
            first=first+1;
        }
        maxlen=max(maxlen,ct);
       }
     return maxlen;

    }
};