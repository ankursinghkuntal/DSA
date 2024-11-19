
// Given an array of integers arr[] representing a permutation, implement the next permutation that rearranges the numbers into the 
// lexicographically next greater permutation. If no such permutation exists, rearrange the numbers into the lowest possible order 
// (i.e., sorted in ascending order). 

// Note - A permutation of n numbers is any possible arrangement of all the integers in range [1-n] where each integer occurs exactly once. 




// class Solution {
// public:
//     void nextPermutation(vector<int>& arr) {
//         int n = arr.size();
//         int maxIdx = -1;

//         for (int i = n - 1; i > 0; i--) {
//             if (arr[i] > arr[i - 1]) {
//                 maxIdx = i - 1;
//                 break;
//             }
//         }

//         if (maxIdx == -1) {
//             sort(arr.begin(), arr.end());
//             return;
//         }

//         int max2Idx = -1;
//         for (int i = n - 1; i > maxIdx; i--) {
//             if (arr[i] > arr[maxIdx]) {
//                 max2Idx = i;
//                 break;
//             }
//         }

//         swap(arr[maxIdx], arr[max2Idx]);
//         sort(arr.begin() + maxIdx + 1, arr.end());
//     }
// };