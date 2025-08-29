class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

     vector<int>indegree(numCourses,0);
     vector<vector<int>>adj(numCourses); //dont forget to declare the the size of adj else it will cause runtime error as we uses the numCourses to loop through adj
     for(auto it : prerequisites)
     {
        adj[it[1]].push_back(it[0]); //revers noding
     }
     for( int i=0;i<numCourses;i++)   
     { for(auto it: adj[i]){
        indegree[it]++;              //find indegree for each node
     }
     }
     queue<int>q;
     for(int i=0;i<numCourses;i++)
     {
        if(indegree[i]==0)   //intially queue have all nodes with indegree 0
        q.push(i);
     }
     vector<int>topo;   
     while(!q.empty())
     {
        int node=q.front();
        q.pop();
        topo.push_back(node);    //now the node is in topo sort array
        for(auto it: adj[node])  // so remove it from indegree pf its adjnode
        {   indegree[it]--;            
            if(indegree[it]==0)   //if thier indegree comes 0 push to stack
             q.push(it);
        }
     }
     
     
     if(topo.size()==numCourses) // if the topo array has exact number of nodes as total ,then its a dag.fine
     return topo;
     else return {};  //else there must be some cyccle, so topo sort not possible , simply return empty vector

    }
};