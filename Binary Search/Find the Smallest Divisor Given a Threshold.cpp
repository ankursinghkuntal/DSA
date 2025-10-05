class Solution {
public:

    bool isFeasible(int &mid, vector<int>&nums, int &threshold){
        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            ans += (nums[i]+mid-1)/mid;
            if(ans > threshold) return false;
        }
        return true;

    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low = 1, high = nums[0];

        for(int i = 0; i < nums.size(); i++){
            high = max(high, nums[i]);
        }

        int ans = 0;

        while(low <= high){
            int mid = low + (high-low)/2;
            if(isFeasible(mid, nums, threshold)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid + 1;
            }
        }

        return ans;
    }
};