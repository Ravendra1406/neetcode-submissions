class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
                for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(fun(board,i,j)==false)
                        return false;
                }
            }
        }
        return true;
    }
    bool fun(vector<vector<char>>v,int row,int col)
    {   int a=0;
     int b=0;
     int c=0;
        for(int i=0;i<9;i++)
        {
            if(v[row][i]==v[row][col])
                a++;
            if(a>1)
                return false;
            if(v[i][col]==v[row][col])
                b++;
            if(b>1)
                return false;
            if(v[3*(row/3)+i/3][3*(col/3)+i%3]==v[row][col])
                c++;
            if(c>1)
                return false;
                
            
        }
     return true;

    }
};
