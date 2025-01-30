// class Solution {
// public:
//     int missingNumber(vector<int>& arr) {
//         int n = arr.size();
//         vector<int> ans(n + 1, 0);

//         for (int i = 0; i < n; i++) {
//             if (arr[i] > 0 && arr[i] <= n) {
//                 ans[arr[i]]++;
//             }
//         }

//         for (int i = 1; i <= n; i++) {
//             if (ans[i] == 0) {
//                 return i;
//             }
//         }

//         return n + 1;
//     }
// };

// *********************************************************************************************************************************************//

// class Solution {
// public:
//     int missingNumber(vector<int>& arr) {
//         int n = arr.size();
        
//         for (int i = 0; i < n; i++) {
//             while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
//                 swap(arr[arr[i] - 1], arr[i]);
//             }
//         }
        
//         for (int i = 0; i < n; i++) {
//             if (arr[i] != i + 1) {
//                 return i + 1;
//             }
//         }
//         return n + 1;
//     }
// };
