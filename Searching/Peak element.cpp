// Given an 0-indexed array of integers arr[], find its peak element and return its index. An element is considered to be peak if its value is 
// greater than or equal to the values of its adjacent elements (if they exist).

// Note: The output will be "true" if the index returned by your function is correct; otherwise, it will be "false".


// TC = O(N)

// class Solution {
//   public:
//     int peakElement(vector<int> &arr) {
//         int n = arr.size();
//         if(n == 1) return 0;
//         if(arr[0] >= arr[1]) return 0;
//         if(arr[n-1] >= arr[n-2]) return n-1;
//         for(int i = 1; i < n-1; i++){
//             if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) return i;
//         }
//     }
// };




// TC = O(logN)

// class Solution {
// public:
//     int peakElement(vector<int>& arr) {
//         int n = arr.size();
//         int low = 0, high = n - 1;
        
//         while (low < high) {
//             int mid = low + (high - low) / 2;

//             // If mid is a peak element
//             if ((mid == 0 || arr[mid] >= arr[mid - 1]) && 
//                 (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
//                 return mid;
//             }
//             // If left neighbor is greater, search in left half
//             else if (mid > 0 && arr[mid - 1] > arr[mid]) {
//                 high = mid - 1;
//             }
//             // Otherwise, search in the right half
//             else {
//                 low = mid + 1;
//             }
//         }

//         return low; // low will be a peak element when low == high
//     }
// };