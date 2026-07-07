class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string curr;
        int n=path.size();
        for (int i=0;i<=n;i++){
            if(i==n || path[i]=='/'){
                if(curr=="" || curr=="."){

                }
                else if(curr==".."){
                    if(!st.empty()) st.pop();
                }
                else{
                    st.push(curr);
                }
                curr="";
            }
            else{
                curr+=path[i];
            }
        }
        vector<string> temp;
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        string ans="";
        for (string dir: temp){
            ans+="/"+dir;
        }
        return ans.empty()?"/":ans;
    }
};