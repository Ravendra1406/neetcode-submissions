class Solution {
public:
    int hor[4]={-1,0,1,0};
    int ver[4]={0,-1,0,1};
    void dfs(vector<vector<bool>>&vis,int i,int j,vector<vector<char>>&grid)
    {
        int n=grid.size();
        int m=grid[0].size();
      if(i<0 || i>=n || j<0 || j>=m)
      {
        return;
      }
      if(vis[i][j]==true || grid[i][j]=='0')
      return;
      vis[i][j]=true;
      for(int k=0;k<4;k++)
      {
         dfs(vis,i+hor[k],j+ver[k],grid);
      }

    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==true || grid[i][j]=='0')
                continue;
                dfs(vis,i,j,grid);
                count++;
            }
        }
        return count;
    }
};
