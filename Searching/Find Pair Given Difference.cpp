// 1.  Run two loops and find that pair if exists


// 2.   TC = O(NlogN)

// class Solution {
// public:
//     int findPair(int n, int x, vector<int> &arr) {
//         // Sort the array to use two-pointer technique
//         sort(arr.begin(), arr.end());

//         int i = 0, j = 1; // Start with two pointers

//         // Traverse the array using two pointers
//         while (j < n) {
//             int diff = arr[j] - arr[i]; // Calculate the difference between the two elements

//             // If the difference equals x, a pair is found
//             if (diff == x) {
//                 return 1;
//             }
//             // If the difference is greater than x, increase i to decrease the difference
//             else if (diff > x) {
//                 i++;
//                 // Ensure that i and j are not pointing to the same element
//                 if (i == j) j++;
//             }
//             // If the difference is less than x, increase j to increase the difference
//             else {
//                 j++;
//             }
//         }
//         // Return -1 if no such pair exists
//         return -1;
//     }
// };
