// =================================================================GFG contest 176==================================================
// https://practice.geeksforgeeks.org/contest/gfg-weekly-176-rated-contest/problems



// class Solution {
// public:
//     int countPalindromicSubstrings(string s, int k) {
//         int n = s.size();
//         if (k > n) return 0;

//         int cnt = 0;
//         int arr[26] = {0};
//         int oddCount = 0;

//         for (int i = 0; i < k; i++) {
//             arr[s[i] - 'a']++;
//             if (arr[s[i] - 'a'] % 2 == 1) {
//                 oddCount++;
//             } else {
//                 oddCount--;
//             }
//         }

//         if (oddCount < 2) {
//             cnt++;
//         }

//         for (int i = k; i < n; i++) {
//             arr[s[i] - 'a']++;
//             if (arr[s[i] - 'a'] % 2 == 1) {
//                 oddCount++;
//             } else {
//                 oddCount--;
//             }

//             arr[s[i - k] - 'a']--;
//             if (arr[s[i - k] - 'a'] % 2 == 1) {
//                 oddCount++;
//             } else {
//                 oddCount--;
//             }

//             if (oddCount < 2) {
//                 cnt++;
//             }
//         }

//         return cnt;
//     }
// };


