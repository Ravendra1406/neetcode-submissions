class Solution {
public:

    bool validTree(int n, vector<vector<int>>& edges) {
          vector<int>adj[n];
          for(int i=0;i<edges.size();i++)
          {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);

          }
          vector<int>vis(n,-1);
          queue<pair<int,int>>q;
          q.push({0,-1});
          vis[0]=1;
          while(!q.empty())
          {
            int curr=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto next:adj[curr])
            {
                if(vis[next]==-1)
                {
                    vis[next]=1;
                    q.push({next,curr});
                }
                else if (next!=parent)
                {
                   return false;
                }

            }
          }
          for(int i=0;i<n;i++)
          {
            if(vis[i]==-1)
            return false;
          }
          return true;

    }
};
