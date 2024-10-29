// 1.  TC  = O(logN)

// class Solution {
//   public:
//     int search(int n, int arr[]) {
//         int low = 0, high = n - 1;

//         while (low < high) {
//             int mid = low + (high - low) / 2;

//             // Ensure mid is even for comparison with the next element
//             if (mid % 2 == 1) {
//                 mid--;
//             }

//             // Check if the pair is broken at this index
//             if (arr[mid] == arr[mid + 1]) {
//                 low = mid + 2;  // Move to the right half
//             } else {
//                 high = mid;     // Move to the left half
//             }
//         }

//         return arr[low];
//     }
// };