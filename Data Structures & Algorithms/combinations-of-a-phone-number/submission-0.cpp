class Solution {
public:
void fun(vector<vector<char>>&dict,vector<string>&ans,string& s,string digits,int i)
{
    if(i>=digits.size())
    {   if(s.size()>0)
        ans.push_back(s);
        return;
    }
    int num=digits[i]-'2';
    for(int j=0;j<dict[num].size();j++)
    {
        s.push_back(dict[num][j]);
        fun(dict,ans,s,digits,i+1);
        s.pop_back();
    }

}
    vector<string> letterCombinations(string digits) {
        vector<vector<char>>dict;
        dict.push_back({'a','b','c'});
        dict.push_back({'d','e','f'});
        dict.push_back({'g','h','i'});
        dict.push_back({'j','k','l'});
        dict.push_back({'m','n','o'});
        dict.push_back({'p','q','r','s'});
        dict.push_back({'t','u','v'});
        dict.push_back({'w','x','y','z'});
        vector<string>ans;
        string s;
        fun(dict,ans,s,digits,0);
        return ans;

    }
};
