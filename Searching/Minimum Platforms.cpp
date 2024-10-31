// class Solution {
// public:
//     // Function to find the minimum number of platforms required at the
//     // railway station such that no train waits.
//     int findPlatform(vector<int>& arr, vector<int>& dep) {
//         int n = arr.size();
//         // Sort both arrival and departure times
//         sort(arr.begin(), arr.end());
//         sort(dep.begin(), dep.end());

//         int ans = 1;
//         int cnt = 1;
//         int i = 1, j = 0;

//         // Traverse the sorted arrival and departure arrays
//         while (i < n && j < n) {
//             if (arr[i] <= dep[j]) {
//                 cnt++;  // New train arrives, so increase platform count
//                 i++;
//             } else {
//                 cnt--;  // Train departs, so decrease platform count
//                 j++;
//             }
//             ans = max(ans, cnt);
//         }

//         return ans;
//     }
// };