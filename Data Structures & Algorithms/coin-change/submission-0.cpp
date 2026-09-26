class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
                int n=amount;
       vector<int>ans(amount+1,-1);
       ans[0]=0;
       for(int i=1;i<=n;i++)
       {//int ans=INT_MAX;
        for(int j=0;j<coins.size();j++)
        {
            if(i-coins[j]>=0 &&ans[i-coins[j]]!=-1 )
             {
                if(ans[i]==-1)
                ans[i]=1+ans[i-coins[j]];
                else
                ans[i]=min(ans[i],1+ans[i-coins[j]]);
             }
        }
       }
       return ans[n];

    }
};
