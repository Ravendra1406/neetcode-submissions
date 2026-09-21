class Solution {
public:
bool fun(vector<vector<char>>&board,string& s,string word,int i,int j,vector<vector<bool>>&vis)
    {
        if(i<0 || j<0 ||i>=board.size() || j>=board[0].size() || vis[i][j]==true)
        return false;
        int n=s.size();
        if(n>=word.size())
       {
         return false;
       }
        if(board[i][j]!=word[n])
        return false;
        s.push_back(board[i][j]);
        vis[i][j]=true;
        if(s==word)
        return true;
        for(int k=-1;k<=1;k++)
        {   
            for(int l=-1;l<=1;l++)
            {
                if(l!=k &&(l==0 || k==0 ))
                if(fun(board,s,word,i+k,j+l,vis))
                return true;
            
            }
        }
        s.pop_back();
        vis[i][j]=false;
       return false;




    }
    bool exist(vector<vector<char>>& board, string word) {
        string s="";
        vector<vector<bool>>vis(board.size(),vector<bool>(board[0].size(),false));
        for(int i=0;i<board.size();i++)
        {
            for (int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0])
                {
                    if(fun(board,s,word,i,j,vis))
                    return true;
                    
                }
            }
        }
        return false;

    }
};
