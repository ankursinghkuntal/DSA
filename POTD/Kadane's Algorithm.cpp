// class Solution {
//   public:
//     // Function to find the sum of contiguous subarray with maximum sum.
//     int maxSubarraySum(vector<int> &arr) {
//         int max_sum = arr[0];
//         int n = arr.size();
//         int sum = arr[0];
//         for(int i = 1; i < n; i++){
//             sum = max(arr[i],sum+arr[i]);
//             max_sum = max(max_sum,sum);
//         }
//         return max_sum;
//     }
// };