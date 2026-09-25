class Solution {
public:
    int rob(vector<int>& nums) {
                int n=nums.size();
        if(n==1)
        return nums[0];
        vector<int>ans(n+1,0);
        ans[0]=nums[0];
        ans[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            ans[i]=max(ans[i-1],(nums[i]+ans[i-2]));
        }
        return ans[n-1];

    }
};
