class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
       vector<vector<int>>v(n,vector<int>(m,0));
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
          //  v[i][j]=grid[i][j];
            if(grid[i][j]==2)
            {q.push({i,j});
           // vis[i][j]=0;
            }
        }
       }
       vector<vector<int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
       
      while(!q.empty())
      {
       int row=q.front().first;
       int col=q.front().second;
       q.pop();
       for(int i=0;i<4;i++)
       {
        int r=row+dir[i][0];
        int c=col+dir[i][1];
        if(r<0 ||r>=n || c<0 ||c>=m || grid[r][c]!=1)
        continue;
        v[r][c]=v[row][col]+1;
        grid[r][c]=2;
        q.push({r,c});
       }
      }
      int ans=INT_MIN;
      for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            return -1;
            ans=max(ans,v[i][j]);
        }
       }
       return ans;
    }
};
