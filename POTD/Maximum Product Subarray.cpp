// class Solution {
// public:
//     int maxProduct(vector<int> &arr) {
//         int n = arr.size();
//         if (n == 0) return 0;

//         int max_pro = arr[0];
//         int curr_max = arr[0];
//         int curr_min = arr[0];

//         for (int i = 1; i < n; ++i) {
//             if (arr[i] < 0) {
//                 swap(curr_max, curr_min);
//             }

//             curr_max = max(arr[i], curr_max * arr[i]);
//             curr_min = min(arr[i], curr_min * arr[i]);

//             max_pro = max(max_pro, curr_max);
//         }

//         return max_pro;
//     }
// };