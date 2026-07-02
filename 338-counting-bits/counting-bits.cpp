class Solution {
public: 
    int count1(int x){
        int cnt=0;
        while(x>0){
            if(x&1){
                cnt++;
            }
            x=x>>1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i=0;i<=n;i++){
            ans.push_back(count1(i));
        }
        return ans;
    }
};