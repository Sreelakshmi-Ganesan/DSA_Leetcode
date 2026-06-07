class Solution {
public:
    int uniquePaths(int m, int n) {
       ///space optimization
    vector<int>prev(n,0);   // prev befor first row taken as a 0 -row 

    for(int i=0;i<m;i++)
    {   vector<int>curr(n);  
        for(int j=0;j<n;j++)
        {
            if(i==0 && j==0) curr[j]=1;
            else{
                int up=0;
                int left=0;
                if(i>=1) up=prev[j];
                if(j>=1) left=curr[j-1];

                curr[j]=up+left;
            }
        }
        prev=curr;
    }
   return prev[n-1];
        
    }
};