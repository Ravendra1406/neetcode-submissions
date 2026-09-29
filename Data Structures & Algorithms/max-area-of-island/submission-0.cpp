class Solution {
public:
        int hor[4]={-1,0,1,0};
    int ver[4]={0,-1,0,1};
    void dfs(vector<vector<bool>>&vis,int i,int j,vector<vector<int>>&grid,int &temp)
    {
        int n=grid.size();
        int m=grid[0].size();
      if(i<0 || i>=n || j<0 || j>=m)
      {
        return;
      }
      if(vis[i][j]==true || grid[i][j]==0)
      return;
      vis[i][j]=true;
      temp++;
      for(int k=0;k<4;k++)
      {
         dfs(vis,i+hor[k],j+ver[k],grid,temp);
      }

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {   int temp=0;
                if(vis[i][j]==true || grid[i][j]==0)
                continue;
                dfs(vis,i,j,grid,temp);
                ans=max(temp,ans);
            }
        }
        return ans;
    }
};
