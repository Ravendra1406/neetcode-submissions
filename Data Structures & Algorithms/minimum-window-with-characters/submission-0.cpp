class Solution {
public:
    string minWindow(string s, string t) {
                 int n=s.size();
         int m=t.size();
         int start=-1;
         if(n<m)
         return "";
         int count=0;
         int ans=INT_MAX;
         map<char,int>mp;
         for(int i=0;i<m;i++){
            mp[t[i]]++;
         }
         int i=0,j=0;
         while(j<n)
         {  
            if(mp[s[j]]>0)
             count++;
            mp[s[j]]--;

           
           while(count==m)
           {
            if(ans>j-i+1)
            {
            ans=j-i+1;
            start=i;
            }

            mp[s[i]]++;
            if(mp[s[i]]>0)
            count--;
            i++;
           }
           j++;


         }
         return (start==-1) ? "" : s.substr(start,ans);

    }
};
