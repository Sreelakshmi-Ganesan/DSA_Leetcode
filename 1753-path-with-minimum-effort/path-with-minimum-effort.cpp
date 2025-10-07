class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        dist[0][0]=0;
        pq.push({0,{0,0}});
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};

        while(!pq.empty())
        { auto it=pq.top();
          int diff= it.first;
          int row=it.second.first;
          int col=it.second.second;
          pq.pop();

          for(int i=0;i<4;i++)
          {
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            

            if(nrow>=0 && nrow<n &&ncol>=0 && ncol<m )
            {
                int neweffort=max(abs(heights[nrow][ncol]- heights[row][col]),diff);
                if(neweffort<dist[nrow][ncol])
                {
                    dist[nrow][ncol]=neweffort;
                    pq.push({neweffort,{nrow,ncol}});
                }
            }
          }

        }
        if(dist[n-1][m-1]==INT_MAX)
        return -1;
        else return dist[n-1][m-1];
    }
};