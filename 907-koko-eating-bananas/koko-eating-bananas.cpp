class Solution {
public:
    long long calculatetotalhours(vector<int>& piles, int speed) {
        long long totalh = 0;
        for (int bananas : piles) {
            totalh +=(bananas+speed-1LL)/speed;
        }
        return totalh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = *max_element(piles.begin(), piles.end());
        int low = 1;
        int high = max;
        int ans = max;
        while (low <= high) {
            int mid = low+(high-low) / 2;
            long long totalh=calculatetotalhours(piles,mid);
            if(totalh<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};