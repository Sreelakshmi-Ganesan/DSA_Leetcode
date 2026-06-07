class Solution {
public:  // space optimization
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       int m=obstacleGrid.size();
       int n=obstacleGrid[0].size();
       vector<int>prev(n,0);  // set imaginary prev row before 0th row as full 0

       for(int i=0;i<m;i++)
       {  vector<int>curr(n);
        for(int j=0;j<n;j++)
        {   if(obstacleGrid[i][j]==1) curr[j]=0;   // first check for obstacle
            else if(i==0 && j==0) curr[j]=1;
            
            else
            {
               int up=0;
               int left=0;
              if(i>=1) up=prev[j];
              if(j>=1) left=curr[j-1];
              curr[j]=left+up;
            }
        }

        prev=curr; // please dont forget the 'prev' update to curr

       }

     return prev[n-1];


    }
};