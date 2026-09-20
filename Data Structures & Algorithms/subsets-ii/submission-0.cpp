class Solution {
public:
    void fun(vector<vector<int>>&ans,vector<int>&temp,vector<int>&nums,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        fun(ans,temp,nums,i+1);
        temp.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1])i++;
        fun(ans,temp,nums,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        fun(ans,temp,nums,0);
        return ans;

    }
};
