class Solution {
public:
    void fun(vector<string>&ans,string& s,int left,int right,int n)
    {
        if(left>n || right>n)
        return;
        if(left==right && left==n)
        {
            ans.push_back(s);
            return;
        }
        if(left<right)
        return;
        s.push_back('(');
        fun(ans,s,left+1,right,n);
        s.pop_back();
        s.push_back(')');
        fun(ans,s,left,right+1,n);
        s.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        int left=0,right=0;
        fun(ans,s,left,right,n);
        return ans;
    }
};
