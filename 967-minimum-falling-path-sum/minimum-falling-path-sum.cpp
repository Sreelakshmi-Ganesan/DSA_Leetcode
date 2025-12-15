class Solution {
public:

    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n =matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int j=0;j<n;j++) dp[0][j]=matrix[0][j];

        for(int i=1;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {   int leftd=1e9;
                int rightd=1e9;
                int up=dp[i-1][j]+matrix[i][j];
               if(j>0) leftd=dp[i-1][j-1]+matrix[i][j];
                if(j<n-1)  rightd=dp[i-1][j+1]+matrix[i][j];

       dp[i][j]=min(up,min(leftd,rightd));
            }
        }

        int mini=1e9;
        for(int j=0;j<n;j++)
        {
            mini=min(mini,dp[m-1][j]);
        }
        return mini;
        
    }
};