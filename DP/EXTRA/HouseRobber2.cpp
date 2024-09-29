// // You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. 
// // All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile,
// //  adjacent houses have a security system connected, 
// // and it will automatically contact the police if two adjacent houses were broken into on the same night.


// // 1. 
// int totalMoney(vector<int> &nums, int n, int stop)
// {
//     if (n < stop)
//     {
//         return 0;
//     }
//     if (n == stop)
//     {
//         return nums[n];
//     }

//     return max(totalMoney(nums, n - 1, stop), nums[n] + totalMoney(nums, n - 2, stop));
// }

// int rob(vector<int> &nums)
// {
//     int n = nums.size();

//     if (n == 1)
//         return nums[0];
//     if (n == 2)
//         return max(nums[0], nums[1]);

//     return max(totalMoney(nums, n - 1, 1), totalMoney(nums, n - 2, 0));
// }

// // 2.
//     int totalMoney(vector<int>& nums, vector<int>& dp, int start, int stop) {
//         dp[0] = nums[start];
//         dp[1] = max(nums[start],nums[start+1]);
//         for(int i = 2; i <= stop-start; i++){
//             dp[i] = max(dp[i - 1], dp[i - 2] + nums[start + i]);
//         }
//         return dp[stop-start];
//     }

//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         if(n==1) return nums[0];
//         else if(n==2) return max(nums[0],nums[1]);

//         vector<int>dp1(n-1,0);
//         vector<int>dp2(n-1,0);

//         return max(totalMoney(nums,dp1,0,n-2),totalMoney(nums,dp2,1,n-1));
//     }