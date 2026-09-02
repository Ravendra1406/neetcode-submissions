class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        vector<int>ss(26,0);
        for(int i=0;i<s.length();i++)
        {
            ss[s[i]-'a']++;
            ss[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(ss[i]!=0)
            return false;
        }
        return true;
    }
};
