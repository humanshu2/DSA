class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength=0;
        int n=s.size();
        for (int i=0;i<n;i++){
            int hash[250]={0};
            for (int j=i;j<n;j++){
                if(hash[s[j]]==1) break;
                int length=j-i+1;
                maxlength=max(length,maxlength);
                hash[s[j]]=1;
            }
        }
        return maxlength;
    }
};