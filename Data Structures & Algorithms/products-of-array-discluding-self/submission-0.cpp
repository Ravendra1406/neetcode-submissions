class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left(nums.size());
        int n=nums.size();
        vector<int>right(nums.size());
        left[0]=1;
        right[nums.size()-1]=1;
        for(int i=1;i<nums.size();i++)
        {
           left[i]=left[i-1]*nums[i-1];
           right[n-1-i]=right[n-i]*nums[n-i];
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(left[i]*right[i]);
        }
        return ans;
    }
};
