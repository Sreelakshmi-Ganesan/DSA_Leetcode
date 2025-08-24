class Solution {
public:
    void bfs(int node, vector<vector<int>> &adj, vector<int>& vis)
    {
        vis[node]=1;
        queue<int>q;
        q.push(node);
        while(!q.empty())
        {
            node=q.front();
            q.pop();
            for(auto it :adj[node])
            {
                if(!vis[it])
                {
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
          int n=isConnected.size();       
        vector<vector<int>>adj(n);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1)
                 adj[i].push_back(j);
            }
        }
         int ct=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                bfs(i,adj,vis);
                ct++;
            }
        }
        return ct;
    }
};