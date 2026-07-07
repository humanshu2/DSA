class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        
        for (char ch:s){
            if (s1.empty() && ch=='#'){
                continue;
            }
            if(ch=='#'){
                s1.pop();
            }
            else{
                s1.push(ch);
            }
        }
        for(char ch:t){
            if(s2.empty() && ch=='#'){
                continue;
            }
            if(ch=='#'){
                s2.pop();
            }
            else{
                s2.push(ch);
            }
        }
        while(!s1.empty() && !s2.empty()){
            if(s1.size()!=s2.size()) return false;
            if(s1.top()!=s2.top()){
                return false;
                
            }
            
           
            s1.pop();
            s2.pop();
        }
    return s1.empty() && s2.empty();
    }
};