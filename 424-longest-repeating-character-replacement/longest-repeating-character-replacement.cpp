class Solution {
public:
    int characterReplacement(string s, int k) {
     int left=0;
     unordered_map<char,int> freq;
     int max_fr=0;
     int maxlen=0;
     for (int right=0;right<s.size();right++){
        freq[s[right]]++;
        max_fr=max(max_fr,freq[s[right]]);
        while((right-left+1)-max_fr>k){
            freq[s[left]]--;
            left++;
        }
        maxlen=max(maxlen,right-left+1);
     }   
     return maxlen;
    }
};