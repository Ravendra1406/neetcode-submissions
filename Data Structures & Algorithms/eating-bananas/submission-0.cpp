class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
                int end=0;
        for(int i=0;i<piles.size();i++)
        {
           end=max(end,piles[i]);
        }
        int start=1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            long temp=0;
             for (int i = 0; i < piles.size(); i++) {
            temp += ceil((double) piles[i] / (double) mid);
             }
            if(temp>h)
            start=mid+1;
            else 
            end=mid-1;

        }
        return start;

    }
};
