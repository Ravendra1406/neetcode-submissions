class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
                       int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        
        // Fill the DP table
        for(int i = n-1; i >= 0; i--) {
            for(int prevInd = i-1; prevInd >= -1; prevInd--) {
                // Not Take case
                int notTake = dp[i+1][prevInd+1];
                
                // Take case
                int take = 0;
                
                // Check for the Take case
                if(prevInd == -1 || nums[i] > nums[prevInd]) {
                    take = dp[i+1][i+1] + 1;
                }
                
                // Store the maximum of the two cases
                dp[i][prevInd+1] = max(take, notTake);
            }
        }
        
        // Return the stored result
        return dp[0][0];
       
 
    }
};
