class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=nums[0];
        int curr=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==res)
            curr++;
            else {
                if(curr>0)
                curr--;
                else 
                {
                    curr=1;
                    res=nums[i];
                }
            }
        }
        return res;
    }
};