class Solution {
public:
        bool ispalindrom(string s,int start,int end)
    {   while(start<=end)
    {
        if(s[start]!=s[end])
        return false;
        start++;
        end--;
    }
    return true;
    }
    void fun(vector<vector<string>>&ans,vector<string>&temp,string s,int start)
    {
       if(start==s.size())
       {
        ans.push_back(temp);
        return;
       }
       for(int i=start;i<s.size();i++)
       {
        if(ispalindrom(s,start,i))
        {
            temp.push_back(s.substr(start,i-start+1));
            fun(ans,temp,s,i+1);
            temp.pop_back();
        }
       }

    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        fun(ans,temp,s,0);
        return ans;
    }
};
