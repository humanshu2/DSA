class Solution {
public:
    string convert2binary(int n){
        string res="";
        while(n>0){
            if(n%2==0) res=res+'0';
            else res+='1';
            n=n/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    bool hasAlternatingBits(int n) {
       string x=convert2binary(n);
       
     for (int i=1;i<x.size();i++){
        if(x[i]==x[i-1]) return false;
      }
       return true;
    }
};