class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>s;
        for(int i=0;i<n-2;i++)
        {
            if(nums[i]>0)
            break;
            int a=0-nums[i];
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(nums[j]+nums[k]==a)
                {s.insert({nums[i],nums[j],nums[k]});
                j++;
                k--;
                }
                else if(nums[j]+nums[k]>a)
                k--;
                else 
                j++;
            }
        }
        vector<vector<int>>ans;
        for(auto i:s)
        {
            ans.push_back(i);
        }
        return ans;

    }
};
