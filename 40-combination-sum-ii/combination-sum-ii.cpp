class Solution {
    private:
    void combinations2(int ind,int n,vector<int>&candidates,int target,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<n;i++)
        {
            if(i>ind && candidates[i]==candidates[i-1]) continue; // to avoid duplicates
            if(candidates[i]>target) break; // when target is small than the element
            ds.push_back(candidates[i]);
            combinations2(i+1,n,candidates,target-candidates[i],ds,ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>ds;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end()); // to bring all duplicates together
        combinations2(0,n,candidates,target,ds,ans);
        return ans;
    }
};