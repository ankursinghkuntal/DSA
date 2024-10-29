//1. TC = O(n^(1/2))

// class Solution {
// public:
//     long long int floorSqrt(long long int n) {
//         long long int mx = 0; // Initialize mx to 0 instead of -1

//         // Iterate from 1 upwards until i*i exceeds n
//         for (long long int i = 1; i * i <= n; i++) {
//             mx = i; // Update mx to the current i, which is a valid sqrt candidate
//         }

//         return mx; // Return the largest valid value of i
//     }
// };



// 2. TC = O(logN)

// class Solution {
//     #define ll long long
// public:
//     long long int floorSqrt(long long int n) {
//         ll low = 1, high = n, mid;

//         while (low <= high) {
//             mid = low + (high - low) / 2;

//             if (mid * mid <= n && (mid + 1) * (mid + 1) > n) {
//                 return mid;
//             }
//             if (mid * mid > n) {
//                 high = mid - 1;
//             } else {
//                 low = mid + 1;
//             }
//         }
//     }
// };