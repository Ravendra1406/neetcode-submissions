class Solution {
public:

    bool isPalindrome(string s) {
    int n=s.size();
   // 
    for(int i=0;i<n;i++)
    {
       if(s[i]>=65 && s[i]<=90)
        {
           s[i]=s[i]+32;
        }
    }
    int i=0,j=n-1;
    while(i<j)
    {   
        if(!(s[i]<=57 && s[i]>=48 || s[i]>=97 && s[i]<=122))
        {
           i++;
           continue;
        }
        if(!(s[j]<=57 && s[j]>=48 || s[j]>=97 && s[j]<=122))
        {
            j--;
            continue;
        }
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
        
    }
    return true;






     /*   string t="";
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
        return check(t,0,t.size()-1);   */
    }
};
