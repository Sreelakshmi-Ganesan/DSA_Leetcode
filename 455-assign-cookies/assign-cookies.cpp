class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m=g.size();
        int n=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(g[i]<=s[j]) // if greed satisfies
            {
                i++; // move to next in both array
                j++;
            }
            else j++;  // else move to next size
        }
  return i;
    }



    
};