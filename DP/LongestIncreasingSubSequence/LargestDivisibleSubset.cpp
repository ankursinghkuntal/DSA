

//  NUMBER

// vector<int> largestDivisibleSubset(vector<int>& nums) {
//     // sort(nums.begin(),nums.end());
//     int n = nums.size();
//     vector<int>dp(n,1);

//     for(int i = 1; i < n; i++){
//         for(int j = 0;j < i; j++){
//             if(nums[i]%nums[j] == 0){
//                 if(dp[i] < dp[j]+1) dp[i] = dp[j] + 1;
//             }
//         }
//     }

//     int ans = 0;
//     for(int i = 0; i < n; i++){
//         ans = max(ans,dp[i]);
//     }
//     return ans;
// }

//  To Print it

// vector<int> largestDivisibleSubset(vector<int> &nums)
// {
//     if (nums.empty())
//         return {};

//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     vector<vector<int>> dp(n);
//     dp[0].push_back(nums[0]);

//     for (int i = 1; i < n; i++)
//     {
//         vector<int> maxSubset;
//         for (int j = 0; j < i; j++)
//         {
//             if (nums[i] % nums[j] == 0 && dp[j].size() > maxSubset.size())
//             {
//                 maxSubset = dp[j];
//             }
//         }
//         dp[i] = maxSubset;
//         dp[i].push_back(nums[i]);
//     }

//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         if (ans.size() < dp[i].size())
//         {
//             ans = dp[i];
//         }
//     }
//     return ans;
// }
