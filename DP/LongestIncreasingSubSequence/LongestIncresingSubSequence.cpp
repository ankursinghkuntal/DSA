// Given an array a[ ] of n integers, find the Length of the Longest Strictly Increasing Subsequence.
// A sequence of numbers is called "strictly increasing" when each term in the sequence is smaller than the term that comes after it.

// ============================================Minimum number of Deletion to sort an array=======================================================

// 1.

// int longestSubsequence(int n, int a[]) {
//     int lis[n];
//     for (int i = 0; i < n; i++) {
//         lis[i] = 1; // Initialize all elements to 1
//     }

//     for (int i = 1; i < n; i++) {
//         for (int j = 0; j < i; j++) {
//             if (a[j] < a[i]) {
//                 lis[i] = max(lis[i], 1 + lis[j]);
//             }
//         }
//     }

//     int ans = 0;
//     for (int i = 0; i < n; i++) {
//         ans = max(ans, lis[i]);
//     }
//     return ans;
// }

/////////////////////////////  Time Complexity => O(n^2)

// 2. Using BinarySearch             TimeComplexity => (nlogn)

// int ceilIdx(vector<int> &tail, int l, int r, int val)
// {
//     while (l < r)
//     {
//         int mid = (l + r) / 2;

//         if (tail[mid] >= val)
//         {
//             r = mid;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
//     return r;
// }

// int longestSubsequence(int n, int a[])
// {
//     vector<int> tail;
//     tail.push_back(a[0]);

//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] > tail.back())
//         {
//             tail.push_back(a[i]);
//         }
//         else
//         {
//             int idx = ceilIdx(tail, 0, tail.size() - 1, a[i]);
//             tail[idx] = a[i];
//         }
//     }

//     return tail.size();
// }

