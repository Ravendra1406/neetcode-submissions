class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
                stack<int>st;
        vector<int>ans(temp.size(),0);
        for(int i=temp.size()-1;i>=0;i--)
        {
          while(!st.empty())
          {
            if(temp[st.top()]>temp[i])
            {
                 ans[i]=st.top()-i;
                 break;
            }
            st.pop();
          }
          st.push(i);

        }  
        return ans;
    }
};
