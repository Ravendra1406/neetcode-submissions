class Solution {
public:
    bool dfs(vector<vector<int>>& adj, vector<int>&vis, vector<int>&pathVis, int node)
    {
        
        vis[node]=1;
        pathVis[node]=1;
        for(auto i:adj[node])
        {
            if(pathVis[i]==1)
            return true;
            else if(vis[i]==0)
            { if(dfs(adj,vis,pathVis,i))
               return true;
            }
        }
        pathVis[node]=0;
        return false;
    }
    bool isCyclic(int N, vector<vector<int>>&adj) {
      vector<int>vis(N,0);
      vector<int>pathVis(N,0);
      for(int i=0;i<N;i++)
      { 
        if(vis[i]==0)
        {
        if(dfs(adj,vis,pathVis,i))
        return true;
        }
      }
      return false;
    }
    bool canFinish(int N, vector<vector<int>>& arr) {
             vector<vector<int>>adj(N,vector<int>{});
        for(int i=0;i<arr.size();i++)
        {
          adj[arr[i][1]].push_back(arr[i][0]);
        }
        if(isCyclic(N,adj))
        return false;
        return true;
    }
};
