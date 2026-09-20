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
        fun(nums,temp,ans,i,target-nums[i]);
        temp.pop_back();
        fun(nums,temp,ans,i+1,target);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        fun(candidates,temp,ans,0,target);
        return ans;
    }
};
