class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
                int n=s.size();
        vector<bool>ans(n+1,false);
        ans[0]=true;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<wordDict.size();j++)
            {
                int k=wordDict[j].size();
                if(i-k>=0 && s.substr(i-k,k)==wordDict[j] && ans[i-k]==true)
                {ans[i]=true;
                break;}
            }
        }
        return ans[n];
    }
};
