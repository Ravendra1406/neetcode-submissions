class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
                int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>>pacific(n,vector<int>(m,0));
        vector<vector<int>>atlantic(n,vector<int>(m,0));
        queue<pair<int,int>>q1;
        queue<pair<int,int>>q2;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0)
                {pacific[i][j]=1;
                 q1.push({i,j});}
                if(i==n-1 || j==m-1)
                {atlantic[i][j]=1;
                q2.push({i,j});}
            }
        }

        //check pacific
      vector<vector<int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
      while(!q1.empty())
      {
        int i=q1.front().first;
        int j=q1.front().second;
        q1.pop();
        for(int k=0;k<4;k++)
        {
            int row=i+dir[k][0];
            int col=j+dir[k][1];
            if(row<0 || row>=n || col<0 || col>=m || heights[i][j]>heights[row][col] || pacific[row][col]==1)
            continue;
            pacific[row][col]=1;
            q1.push({row,col});
        }

      }


        //check atlantic

      while(!q2.empty())
      {
        int i=q2.front().first;
        int j=q2.front().second;
        q2.pop();
        for(int k=0;k<4;k++)
        {
            int row=i+dir[k][0];
            int col=j+dir[k][1];
            if(row<0 || row>=n || col<0 || col>=m || heights[i][j]>heights[row][col] || atlantic[row][col]==1)
            continue;
            atlantic[row][col]=1;
            q2.push({row,col});
        }

      }
        //return ans
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(pacific[i][j]==1 && atlantic[i][j]==1)
               ans.push_back({i,j});
            }
        }
    return ans;

    }
};
