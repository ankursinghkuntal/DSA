// Given a sorted (in ascending order) and rotated array arr of distinct elements which may be rotated at some point and given an element key,
//  the task is to find the index of the given element key in the array arr. The whole array arr is given as the range to search.

// Rotation shifts elements of the array by a certain number of positions, with elements that fall off one end reappearing at the other end.
// Note:- 0-based indexing is followed & returns -1 if the key is not present.



// TC = O(n)

// class Solution {
//   public:
//     int search(vector<int>& arr, int key) {
//         for(int i = 0; i < arr.size(); i++){
//             if(arr[i] == key) return i;
//         }
//         return -1;
//     }
// };


// TC = O(logN)
// class Solution {
// public:
//     // Function to find the pivot element, where the array rotation starts
//     int findPivot(vector<int>& arr, int low, int high) {
//         int mid;
//         while (low < high) {
//             if (arr[low] <= arr[high]) return low; // Array is already sorted
            
//             mid = (low + high) / 2;
//             if (arr[mid] > arr[high]) low = mid + 1;
//             else high = mid;
//         }
//         return low;
//     }

//     // Standard binary search function
//     int binarySearch(vector<int>& arr, int low, int high, int key) {
//         while (low <= high) {
//             int mid = (low + high) / 2;
//             if (arr[mid] == key) return mid;
//             else if (arr[mid] < key) low = mid + 1;
//             else high = mid - 1;
//         }
//         return -1; // Key not found
//     }

//     // Function to search for a key in the rotated sorted array
//     int pivotedBinarySearch(vector<int>& arr, int n, int key) {
//         int pivot = findPivot(arr, 0, n - 1);

//         if (pivot == 0) // Array is not rotated
//             return binarySearch(arr, 0, n - 1, key);

//         // If key is the pivot element
//         if (arr[pivot] == key)
//             return pivot;

//         // If the key is in the left portion
//         if (arr[0] <= key)
//             return binarySearch(arr, 0, pivot - 1, key);
        
//         // If the key is in the right portion
//         return binarySearch(arr, pivot, n - 1, key);
//     }

//     // Main search function
//     int search(vector<int>& arr, int key) {
//         return pivotedBinarySearch(arr, arr.size(), key);
//     }
// };