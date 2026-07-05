class Solution {
public:
    vector<int> findnse(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n);
        for (int i = n-1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : n;
            st.push(i);
        }
        return ans;
    }
    vector<int> findpsee(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>nums[i]){
                st.pop();
            }
            ans[i]=!st.empty()?st.top():-1;
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse=findnse(arr);
        vector<int> psee=findpsee(arr);
        int n=arr.size();
        int mod=(1e9+7);
        int total=0;
        for (int i=0;i<n;i++){
            int left=i-psee[i];
            int right=nse[i]-i;
            total=(total+(right*left*1LL*arr[i])%mod)%mod;
        }
        return total;
    }
};