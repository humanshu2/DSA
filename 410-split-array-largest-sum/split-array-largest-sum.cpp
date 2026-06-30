class Solution {
public:
    int countpartitions(vector<int>& arr,int maxsum){
        int partition=1;
        long subarraysum=0;
        for(int i=0;i<arr.size();i++){
          if(arr[i]+subarraysum<=maxsum){
            subarraysum+=arr[i];
          }
          else{
            partition++;
            subarraysum=arr[i];
          }
        }
        return partition;
    }
    int splitArray(vector<int>& nums, int k) {
        int left=*max_element(nums.begin(),nums.end());
        int sum=0;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int right=sum;
        while(left<=right){
            int mid=(left+right)/2;

            if(countpartitions(nums,mid)>k){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return left;
    }
};