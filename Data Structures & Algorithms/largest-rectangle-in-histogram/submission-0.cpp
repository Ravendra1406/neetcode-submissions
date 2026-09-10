class Solution {
public:
    int largestRectangleArea(vector<int>& ht) {
             int n=ht.size();

     stack<int>st;

     int largestArea=0;

     int area;

     int nse, pse;

     for(int i=0;i<n;i++)
     {
        while(!st.empty() && ht[st.top()]>=ht[i]){

        int ind=st.top();
        st.pop();

        pse=st.empty() ? -1:st.top();
        nse=i;

        area=ht[ind]*(nse-pse-1);
        largestArea=max(largestArea,area);

        }
        st.push(i);

     }
     while(!st.empty()){
        nse=n;
        int ind=st.top();
        st.pop();
        pse=st.empty() ? -1 : st.top();
        area= ht[ind]*(nse-pse-1);
        largestArea=max(largestArea,area);
     }
     return largestArea;
    }
};
