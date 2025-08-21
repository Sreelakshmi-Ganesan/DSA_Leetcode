class Solution {
public:
    const static bool comp(const vector<int>&a,const vector<int> &b)
    {
         return (a[1]<b[1]);
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),comp);
        int ct=1;
        int lastendingtime=intervals[0][1];
        for(int i=0;i<n;i++)
        {
            if(intervals[i][0]>=lastendingtime)
            {
                ct++;
                lastendingtime=intervals[i][1];
            }
        }
        return n-ct;
    }
};