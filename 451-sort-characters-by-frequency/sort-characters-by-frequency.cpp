class Solution {
public:
    static bool comparator(pair<int,char>& p1,pair<int,char>& p2){
        if(p1.first!=p2.first)
        return p1.first>p2.first;
        return p1.second<p2.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        vector<pair<int,char>> freq;
        for (auto it:mp){
            freq.push_back({it.second,it.first});
        }
        sort(freq.begin(),freq.end(),comparator);
        string ans="";
        for(auto it:freq){
            ans.append(it.first,it.second);
        }
        return ans;
    }
};