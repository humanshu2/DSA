class Solution {
public:
    int calPoints(vector<string>& operations) {
     stack<int> st;
     for(string ch:operations){
        if(ch=="C"){
            st.pop();
        }
        else if(ch=="D"){
            st.push(2*st.top());
        }
        else if(ch=="+"){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.push(a);
            st.push(a+b);
        }
        else{
            st.push(stoi(ch));
        }
     }   
     int sum=0;
     while(!st.empty()){
        sum+=st.top();
        st.pop();
     }
     return sum;
    }
};