class Solution {
public:
    void fun(vector<int>& nums,vector<int>&temp,vector<vector<int>>& ans,int i,int target)
    {
        if(target==0)
        {
        ans.push_back(temp);
        return;
        }
       if(i>=nums.size() || target<0)
       return;
        temp.push_back(nums[i]);
        fun(nums,temp,ans,i+1,target-nums[i]);
        temp.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1])
        {
            i++;
        }
        fun(nums,temp,ans,i+1,target);


    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        fun(candidates,temp,ans,0,target);
        return ans;
    }
};
