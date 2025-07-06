// Given an array arr[] and a number target, find a pair of elements (a, b) in arr[], where a<=b whose sum is closest to target.
// Note: Return the pair in sorted order and if there are multiple such pairs return the pair with maximum absolute difference.
//  If no such pair exists return an empty array.



// class Solution {
//     public:
//         vector<int> sumClosest(vector<int>& arr, int target) {
//             if (arr.size() < 2) return {};
    
//             sort(arr.begin(), arr.end());
//             int i = 0, j = arr.size() - 1;
//             int closestSum = INT_MAX;
//             int closestPair1 = 0, closestPair2 = 0;
    
//             while (i < j) {
//                 int currentSum = arr[i] + arr[j];
    
//                 if (abs(currentSum - target) < abs(closestSum - target)) {
//                     closestSum = currentSum;
//                     closestPair1 = arr[i];
//                     closestPair2 = arr[j];
//                 }
    
//                 if (currentSum < target) {
//                     i++;
//                 } else if (currentSum > target) {
//                     j--;
//                 } else {
//                     return {arr[i], arr[j]};
//                 }
//             }
    
//             return {closestPair1, closestPair2};
//         }
//     };
    