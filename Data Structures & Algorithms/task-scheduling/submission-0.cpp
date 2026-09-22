class Solution {
public:
int leastInterval(vector<char>& tasks, int n) {
        map<char,int>mp;
        for(int i=0;i<tasks.size();i++)
        {
            mp[tasks[i]]++;

        }
        priority_queue<int>pq;
        for(auto p:mp)
        {
           pq.push(p.second);
        }
        int ans=0;
        while(!pq.empty())
        {
           vector<int>temp;
           for(int i=1;i<=n+1;i++)
           {
            if(!pq.empty())
            {
                int freq=pq.top();
                pq.pop();
                freq--;
                temp.push_back(freq);

            }
           }
           for(int &f : temp)
           {
            if(f>0)
            pq.push(f);
           }
           if(pq.empty())
           {
             ans+=temp.size();
           }
           else
           ans+=n+1;
        }
        return ans;
    }
};
