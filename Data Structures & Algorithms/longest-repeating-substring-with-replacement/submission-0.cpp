class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int>mp;
        int j=0;
        int ans=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            mx=max(mx,mp[s[i]]);
            if(i-j+1-mx>k)
            {
                mp[s[j]]--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
