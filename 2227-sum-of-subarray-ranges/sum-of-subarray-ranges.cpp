class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
       int n=nums.size();
       long long sum=0;
       for (int i=0;i<n;i++) {
        int smallest=nums[i];
        int largest=nums[i];
        for (int j=i+1;j<n;j++){
            smallest =min(nums[j],smallest);
            largest=max(nums[j],largest);
            sum=sum+(largest-smallest);
        }
        
       }
       return sum;
    }
};