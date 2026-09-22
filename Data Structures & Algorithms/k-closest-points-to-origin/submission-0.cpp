class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<points.size();i++)
        {   int x=points[i][0];
            int y=points[i][1];
            pq.push({pow(x,2)+pow(y,2),i});
            if(pq.size()>k)
            pq.pop();
        }
        vector<vector<int>>ans;
        while(!pq.empty())
        {
            int i=pq.top().second;
            ans.push_back(points[i]);
            pq.pop();
        }
        return ans;

    }
};
