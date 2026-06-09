class Solution {
public:
    //tabulation
    int f(int i,int j,vector<vector<int>>&triangle,int row,vector<vector<int>>&dp)
    {
        if(i==row-1)
        {   /*int mini=1e9;
            for(int k=0;k<triangle[row-1].size();k++)
            {
              mini=min(mini,triangle[i][k]);
            }*/
            return triangle[i][j];
        }
        
        //if(i>triangle.size() || j>triangle[row-1].size()) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        int down =triangle[i][j]+f(i+1,j,triangle,row,dp);
        int rightdown=triangle[i][j] +f(i+1,j+1,triangle,row,dp);

        return dp[i][j]=min(down,rightdown);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
     
       int m = triangle.size();
       int n= triangle[m-1].size(); 
       vector<vector<int>>dp(m,vector<int>(n));    
       
       for(int i=0;i<n;i++)
       {
          dp[m-1][i]=triangle[m-1][i];
       }
       
       for(int i=m-2;i>=0 ;i--)
       {
        for(int j=i;j>=0;j--)
        {
            int down =triangle[i][j]+dp[i+1][j];
        int rightdown=triangle[i][j] +dp[i+1][j+1];

         dp[i][j]=min(down,rightdown);
        }
       }
       return dp[0][0];
    }
};