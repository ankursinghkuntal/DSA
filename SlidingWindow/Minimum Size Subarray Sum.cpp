// Given an array of positive integers nums and a positive integer target, return the minimal length of a
//  subarray whose sum is greater than or equal to target. 
// If there is no such subarray, return 0 instead.



// class Solution {
//     public:
//         int minSubArrayLen(int target, vector<int>& nums) {
//             int n = nums.size();
//             int sum = 0, left = 0, minLen = INT_MAX;
    
//             for (int right = 0; right < n; right++) {
//                 sum += nums[right];
    
                
//                 while (sum >= target) {
//                     minLen = min(minLen, right - left + 1);
//                     sum -= nums[left];
//                     left++;
//                 }
//             }
    
//             return (minLen == INT_MAX) ? 0 : minLen; 
//         }
//     };