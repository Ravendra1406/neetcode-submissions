class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int j=-1;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            auto t=mp.find(s[i]);
            if(t!=mp.end())
            {
              j=max(j,t->second);
              mp.erase(s[i]);
            }
            mp[s[i]]=i;
            ans=max(ans,i-j);
        }
        return ans;
    }
};
