class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int> st;
        vector<int> ans(n);
        for (int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            ans[i]=st.empty()?i:st.top();
            st.push(i);
        }
        vector<int> indices(n);
        for (int i=0;i<n;i++){
            indices[i]=ans[i]-i;
        }
        return indices;
    }
};