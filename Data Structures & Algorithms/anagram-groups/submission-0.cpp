class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
                map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);
        }
        vector<vector<string>>ans;
        for(auto i: mp)
        {
          ans.push_back(i.second);
        }
        return ans;
    }
};
