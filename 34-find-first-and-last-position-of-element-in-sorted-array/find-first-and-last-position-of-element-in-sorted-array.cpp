class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int left=-1;
        int right=-1;
        for (int i=0;i<n;i++){
            if(nums[i]==target){
                if(left==-1) left=i;
                right=i;
            }
            
            
        }
        return {left,right};

    }
};