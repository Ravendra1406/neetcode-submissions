class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
                int n=position.size();
        vector<pair<int,int>>temp;
        for(int i=0;i<n;i++)
        {
            temp.push_back({position[i],speed[i]});
        }
        sort(temp.begin(),temp.end());
        float mx=0;
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
          float t=target-temp[i].first;
          t=(float)t/(temp[i].second);
          if(t>mx)
          {ans++;
          mx=t;
          }
        }
        return ans;
    }
};
