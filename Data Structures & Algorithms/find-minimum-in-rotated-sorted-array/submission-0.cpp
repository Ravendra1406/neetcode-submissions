class Solution {
public:
    int findMin(vector<int> &nums) {
                int start=0;
        int end=nums.size()-1;
        

        while(start<=end)
        {
            int mid=(start+end)/2;
            if(mid>0 && nums[mid]<nums[mid-1])
            return nums[mid];
            else if(nums[mid]<nums[nums.size()-1])
            end=mid-1;
            else 
            start=mid+1;
        }
        return nums[0];
    
    }
};
