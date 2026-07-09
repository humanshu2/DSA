class Solution {
public:
    int atMost(vector<int>& nums,int goal){
        int left=0;
        int right=0;
        int sum=0;
        int n=nums.size();
        if(goal<0) return 0;
        int cnt=0;
        while(right<n){
            sum+=nums[right];
            while(sum>goal){
                sum=sum-nums[left];
                left++;
            }
            cnt=cnt+(right-left+1);
            right++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums,goal)-atMost(nums,goal-1);
    }
};