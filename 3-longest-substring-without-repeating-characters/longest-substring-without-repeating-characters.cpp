class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int right=0;
        int maxlength=0;
        int hash[256];
        for (int i=0;i<256;i++){
            hash[i]=-1;
        }
        while(right<n){
            if(hash[s[right]]!=-1){
                    left=max(hash[s[right]]+1,left);
                
            }
        int length=right-left+1;
        maxlength=max(length,maxlength);
        hash[s[right]]=right;
        right++;          
        }
        return maxlength;
    }
};