class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<vector<pair<int,int>>>adjlist(n);
         for(auto it :flights)
         {
            adjlist[it[0]].push_back({it[1],it[2]});
         }
         vector<int>distprice(n,INT_MAX);
         priority_queue<pair<int ,pair<int,int>> ,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
         pq.push({0,{src,0}});
         distprice[src]=0;

         while(!pq.empty())
         {
            auto it =pq.top();
            int stops=it.first;
            int node=it.second.first;
            int cost=it.second.second;
            pq.pop();
            if(stops>k) continue;

            for(auto it :adjlist[node])
            {
                int adjnode=it.first;
                int price=it.second;

                if(price +cost<distprice[adjnode] && stops<=k)
                {
                    distprice[adjnode]=price+cost;
                    pq.push({stops+1,{adjnode,cost+price}});
                }

            }
         }

         if(distprice[dst]==INT_MAX)
         return -1;
         else return distprice[dst];
    }
};