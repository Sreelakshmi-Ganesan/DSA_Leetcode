class Solution {
    
public:
    //space optimization
    
    int minPathSum(vector<vector<int>>& grid) {
     int m=grid.size();
     int n=grid[0].size();
     vector<int>prev(n,0); //imaginary prev row before 0th row
    
    
    for(int i=0;i<m;i++)
    {   vector<int>curr(n);
        for(int j=0;j<n;j++)
        {
            if(i==0 && j==0) curr[j]=grid[0][0];
            else{
                int up=grid[i][j];
                if(i>=1) up+=prev[j];
                else up+=1e9;
                int left=grid[i][j];
                if(j>=1) left+=curr[j-1];
                else left+=1e9;
             
                curr[j]=min(left,up);
            }
        }
        prev=curr;
    }
    return prev[n-1];

    }
};