class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
       return false;
       map<char,int>mp;
       int m=s1.size();
       int n=s2.size();
        for(int i=0;i<26;i++)
        {
            mp['a'+i]=0;
        }
        for(int i=0;i<s1.size();i++)
        {
            mp[s1[i]]++;
        }
        int i=0;
        int j=0;
        while(j<s2.size())
        {
            mp[s2[j]]--;
            if(j-i+1<m)
            {
                j++;
            }
            else if(j-i+1==m)
            {
                int k=0;
                for(k=0;k<26;k++)
                {
                    if(mp[k+'a']!=0)
                    break;
                }
                if(k==26)
                return true;
                mp[s2[i]]++;
                i++;
                j++;

            }
        }
        return false;

    }
};
