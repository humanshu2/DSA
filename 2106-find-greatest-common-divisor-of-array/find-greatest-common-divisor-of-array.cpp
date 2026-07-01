class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minel=*min_element(nums.begin(),nums.end());
        int maxel=*max_element(nums.begin(),nums.end());
        int maxi=1;
        for (int i=minel;i>=1;i--){
            if(minel%i==0 && maxel%i==0){
                maxi=max(maxi,i);
            }
        }
        return maxi;
    }
};