class Solution {
public:
    const static bool comp(const vector<int> &a, const vector<int>&b)
    {
        return (a[0]<b[0]);
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),comp);
        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for(int i=1;i<n;i++)
        {
            if(!res.empty() && intervals[i][0]>res.back()[1])
            {
                res.push_back(intervals[i]);
            }
            else
            {
                res.back()[1]=max(res.back()[1],intervals[i][1]);
            }
        }
        return res;
    }
};