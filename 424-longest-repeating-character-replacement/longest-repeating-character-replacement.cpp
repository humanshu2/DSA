class Solution {
public:
    int characterReplacement(string s, int k) {
      int left=0,right=0;
      int maxcnt=0;
      int maxlen=0;
      int n=s.size();
      vector<int> freq(26,0);
      while(right<n){
        freq[s[right]-'A']++;
        maxcnt=max(maxcnt,freq[s[right]-'A']);
        while((right-left+1)-maxcnt>k){
            freq[s[left]-'A']--;
            left++;
        }
        maxlen=max(maxlen,right-left+1);
        right++;
      }  
      return maxlen;
    }
};