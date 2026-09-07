class Solution {
public:
    int trap(vector<int>& height) {
                int n=height.size();
        int i=1;
        int j=n-2;
        int ans=0;
        int left=height[0];
        int right=height[n-1];
        while(i<=j)
        {
          while(height[i]>left && i<n)
          {
           left=height[i];
           i++;
          }
          while(height[j]>right && j>0)
          { 
            right=height[j];
            j--;
          }
          if(i<=j)
          { 
          if(left<right)
          {
            ans+=(left-height[i]);
            i++;
          }
          else {
            ans+=(right-height[j]);
            j--;
          }
        }
        }
        return ans;
    }
};
