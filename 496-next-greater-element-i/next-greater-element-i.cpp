class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size() , n2=nums2.size();
          stack<int>st;
          unordered_map<int,int>nge;
          vector<int> ans(n1);
           for(int j=0;j<n2;j++)
           {
            while(!st.empty() && nums2[j]>st.top())
            {
                int prev_elem=st.top();
                st.pop();
                nge[prev_elem]=nums2[j];
                
            }
            st.push(nums2[j]);
           }
           while(!st.empty())
            {
                nge[st.top()]=-1;
                st.pop();
            }
            for(int i=0;i<n1;i++)
            {
                ans[i]=nge[nums1[i]];
            }

        return ans;
    }
};