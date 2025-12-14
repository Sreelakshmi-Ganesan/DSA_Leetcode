class Solution {
public:
    int uniquepath_rec(int i,int j,vector<vector<int>>&dp)
    {
       if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
      if(dp[i][j]!=-1) return dp[i][j];
   int  up=uniquepath_rec(i-1,j,dp);
    int left=uniquepath_rec(i,j-1,dp);
       return dp[i][j]=up+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int x=uniquepath_rec(m-1,n-1,dp);
        return x;
    }
};