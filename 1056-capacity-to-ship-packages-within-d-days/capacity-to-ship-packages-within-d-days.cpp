class Solution {
public:
    int finddays(vector<int>& nums, int capacity) {
        int day = 1;
        int load = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] + load > capacity) {
                day += 1;
                load = nums[i];
            } else {
                load += nums[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for (int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        int left=*max_element(weights.begin(),weights.end());
        int right=sum;
        while(left<=right){
            int mid=(left+right)/2;
            int numdays=finddays(weights,mid);
            if(numdays<=days){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};