class Solution {
public:
    vector<int> findnse(vector<int>& arr){
      int n=arr.size();
      vector<int> nse(n);
      stack<int> st;
      for (int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        nse[i]=st.empty()?n:st.top();
        st.push(i);
      }
      return nse;
    }
    vector<int> findpse(vector<int>& arr){
      int n=arr.size();
      vector<int> pse(n);
      stack<int> st;
      for (int i=0;i<n;i++){
          while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
          }
          pse[i]=!st.empty()?st.top():-1;
          st.push(i);
      }
      return pse;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int>ns=findnse(heights);
        vector<int> ps=findpse(heights);
        int maxi=0;
        int n=heights.size();
        for(int i=0;i<n;i++){
            maxi=max(maxi,(ns[i]-ps[i]-1)*heights[i]);
        }
        return maxi;
    }
};