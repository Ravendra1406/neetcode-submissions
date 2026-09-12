class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
                int n=nums.size();
        int j=0;
        vector<int>ans;
        deque<int>q;
        int mx=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
           while(!q.empty() && q.back()<nums[i])
           q.pop_back();
           q.push_back(nums[i]);
           if(i-j+1==k)
           {
            ans.push_back(q.front());
            if(q.front()==nums[j])
            q.pop_front();
            j++;
           }

        }
        return ans;
    }
};
