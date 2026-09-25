class Solution {
public:
        int fun(vector<int>& nums,int start,int end)
    {  
     //  vector<int>ans(nums.size(),0);
       int prev1=0;
       int prev2=0;
       for(int i=start;i<=end;i++)
       {
        
        int curr=max(prev1,prev2+nums[i]);
        prev2=prev1;
        prev1=curr;
       }
       return prev1;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        int n=nums.size();
        return max(fun(nums,0,n-2),fun(nums,1,n-1));
    }
};
