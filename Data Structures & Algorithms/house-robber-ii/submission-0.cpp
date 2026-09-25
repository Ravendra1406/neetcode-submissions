class Solution {
public:
        int fun(vector<int>& nums,int start,int end)
    {  
       vector<int>ans(nums.size(),0);
       ans[start]=nums[start];
       ans[start+1]=max(ans[start],nums[start+1]);
       for(int i=start+2;i<=end;i++)
       {
        ans[i]=max(ans[i-1],ans[i-2]+nums[i]);
       }
       return ans[end];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        if(nums.size()==2)
        return max(nums[0],nums[1]);
        int n=nums.size();
        return max(fun(nums,0,n-2),fun(nums,1,n-1));
    }
};
