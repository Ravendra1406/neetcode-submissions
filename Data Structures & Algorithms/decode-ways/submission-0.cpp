class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0')
        return 0;
        int n=s.size();
        vector<int>ans(n,0);
        if(n==1)
        return 1;
        ans[0]=1;
        if(s[0]<'2' || (s[0]=='2' && s[1]<='6'))
        ans[1]+=1;
        if(s[1]>'0')
        ans[1]+=1;
        for(int i=2;i<n;i++)
        {
            if(s[i-1]>'0' && (s[i-1]<'2' || (s[i-1]=='2' && s[i]<='6')))
            ans[i]=ans[i]+ans[i-2];
            if(s[i]>'0')
            ans[i]+=ans[i-1];
        }
        return ans[n-1];

    }
};
