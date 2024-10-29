// Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array.
// Note: If the array is increasing then just print the last element will be the maximum value.

// 1. TC = O(n)
// class Solution{
// public:
	
// 	int findMaximum(int arr[], int n) {
// 	    for(int i = 1; i < n; i++){
// 	        if(arr[i-1] > arr[i]) return arr[i-1];
// 	    }
// 	    return arr[n-1];
// 	}
// };


// 2. TC = O(logN)

// class Solution {
// public:
//     int findMaximum(int arr[], int n) {
//         int low = 0, high = n - 1;
    
//         // If the array has only one element
//         if (n == 1) {
//             return arr[0];
//         }
    
//         while (low < high) {
//             int mid = low + (high - low) / 2;
    
//             // Check if mid is the maximum
//             if (mid > 0 && mid < high && arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
//                 return arr[mid];
//             }
    
//             // If mid is the last element, return it
//             if (mid == high) {
//                 return arr[high];
//             }
    
//             // Move to the right half if the next element is greater
//             if (mid < high && arr[mid] < arr[mid + 1]) {
//                 low = mid + 1; // Search in the right half
//             } else {
//                 high = mid; // Search in the left half
//             }
//         }
    
//         // When low == high, we found the maximum element
//         return arr[low];
//     }
// };