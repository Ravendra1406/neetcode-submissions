class Solution {
public:
bool dfs(vector<vector<int>>&adj,vector<int>&vis,vector<int>&pathVis,int node,vector<int>&ans)
    {
       vis[node]=1;
       pathVis[node]=1;
       for(int i:adj[node])
       {
          if(pathVis[i]==1)
          return true;
          if(vis[i]==0)
          {if(dfs(adj,vis,pathVis,i,ans))
          return true;}
       }
       pathVis[node]=0;
       ans.push_back(node);
       return false;
    }
    vector<int> findOrder(int N, vector<vector<int>>& pre) {
        vector<vector<int>>adj(N);
        for(int i=0;i<pre.size();i++)
        {
            adj[pre[i][0]].push_back(pre[i][1]);

        }
      vector<int>vis(N,0);
      vector<int>pathVis(N,0);
      vector<int>ans;
      for(int i=0;i<N;i++)
      { 
        if(vis[i]==0)
        {
        if(dfs(adj,vis,pathVis,i,ans))
        return vector<int>{};
        }
      }
    //  reverse(ans.begin(),ans.end());
      return ans;

    }
};
