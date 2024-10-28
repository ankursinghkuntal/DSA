// 1. Treverse the whole array to find that element

// 2.  TC = O(logN)
// class Solution {
// public:
//     int findFloor(vector<long long> &v, long long n, long long x) {
//         int ans = lower_bound(v.begin(), v.end(), x) - v.begin();
        
//         if (ans < n && v[ans] == x) {
//             return ans;
//         } else if (ans == 0) {
//             return (v[0] <= x) ? 0 : -1; // Check if x is smaller than all elements
//         } else {
//             return ans - 1;
//         }
//     }
// };