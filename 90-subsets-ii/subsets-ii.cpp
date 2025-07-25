class Solution {
public:
   void subset(int ind, vector<int> &nums, int n, vector<int> &ds, set<vector<int>> & res)
   {  
    if(ind ==n)
    {   vector<int>s=ds;
        sort(s.begin(),s.end());
        res.insert(s);
        return;
    }
        ds.push_back(nums[ind]);
        subset(ind+1,nums,n,ds, res);
        ds.pop_back();
        subset(ind+1,nums,n,ds, res);



   }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
      vector<int> ds;
      set<vector<int>> res;
      subset(0,nums,nums.size(),ds,res);
      
      return vector<vector<int>>(res.begin(),res.end());
      
    }
};