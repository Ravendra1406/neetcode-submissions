class Solution {
public:
   bool check(string s,int i,int j)
    { 
      while(i<j)
      {
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
      }
      return true;

     }
    bool isPalindrome(string s) {
        string t="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<=57 && s[i]>=48 || s[i]>=97 && s[i]<=122) 
            t+=s[i];
            else if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
                t+=s[i];
            }
        }
        return check(t,0,t.size()-1);   
    }
};
