class Solution {
public:
int sumdiv(vector<int>& arr,int div){
    int sum=0;
    int n=arr.size();
   for(int num:arr){
    sum+=ceil((double)num/div);
   }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(nums.size()>threshold) return -1;
        int maxi=*max_element(nums.begin(),nums.end());
        int left=1;
        int right=maxi;
        while(left<=right){
            int mid=(left+right)/2;
            if(sumdiv(nums,mid)<=threshold){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};