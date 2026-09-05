class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        return 0;
        unordered_set<int>mp;
        for(int i=0;i<n;i++)
        {
            mp.insert(nums[i]);
        }
        int ans=1;
        for(int k:mp)
        {  int cnt=1;
             if(mp.find(k-1)==mp.end())
           { 
            k++;
            while(mp.find(k)!=mp.end())
            {
                cnt++;
                k++;
            }
           }
            ans=max(cnt,ans);
        }
        return ans;

    }
};
