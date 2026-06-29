class Solution {
public:
    bool possible(vector<int>& nums,int day,int m,int k){
        int cnt=0;
        int noOfB=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=day){
                cnt++;
                if(cnt==k){
                    noOfB++;
                    cnt=0;
                }
            }
            else{
                
                cnt=0;
            }
        }
        
        return noOfB>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=m*1LL*k*1LL;
        if(val>bloomDay.size()) return -1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for (int i=0;i<bloomDay.size();i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        int left=mini;
        int right=maxi;
        int result=-1;
        while(left<=right){
            int mid=(left+right)/2;
           if(possible(bloomDay,mid,m,k)){
            result=mid;
            right=mid-1;
           }
           else{
            left=mid+1;
           }
           
        }
        return result;
    }
};