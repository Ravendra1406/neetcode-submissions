class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
                        //your code goes here
        int n=strs.size();
        int m=201;
        for(int i=0;i<n;i++)
        {
          m=min(m,int(strs[i].size()));
        }
        for(int i=0;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(strs[j][i]!=strs[j-1][i])
                return strs[j].substr(0,i);
            }
        }
        return strs[0].substr(0,m);
    }
};