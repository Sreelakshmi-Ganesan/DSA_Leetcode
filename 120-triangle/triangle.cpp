class Solution {
public:
    //space optimization
  

    int minimumTotal(vector<vector<int>>& triangle) {
     
       int m = triangle.size();
       int n= triangle[m-1].size(); 
       vector<int>front(n,0);    
       
       for(int i=0;i<n;i++)
       {
          front[i]=triangle[m-1][i];
       }
       
       for(int i=m-2;i>=0 ;i--)
       {  vector<int>curr(n);
        for(int j=i;j>=0;j--)
        {
            int down =triangle[i][j]+front[j];
        int rightdown=triangle[i][j] +front[j+1];

         curr[j]=min(down,rightdown);
        }
        front=curr;
       }
       return front[0];
    }
};