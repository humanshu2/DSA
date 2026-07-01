class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size(); //i
        int m=accounts[0].size();
        int maxi=accounts[0][0];
        for (int i=0;i<n;i++){
            int wealth=0;
            for (int j=0;j<m;j++){
                wealth +=accounts[i][j];
                   maxi=max(wealth,maxi);
            }
        
        }
 return maxi;
    }
};