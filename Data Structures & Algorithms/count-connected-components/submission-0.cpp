class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
          for(int i=0;i<edges.size();i++)
          {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);

          }
       vector<int>vis(n,-1);
       queue<int>q;
       int ans=0;
       for(int i=0;i<n;i++)
       {
        if(vis[i]==1)
        continue;
        ans++;
        q.push(i);
        vis[i]=1;
        while(!q.empty())
        {
            int node= q.front();
            q.pop();
            for(auto next:adj[node])
            {
                if(vis[next]==1)
                continue;
                q.push(next);
                vis[next]=1;
            }
        }
       }
       return ans;
    }
};
