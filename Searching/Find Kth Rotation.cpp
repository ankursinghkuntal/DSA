//1. TC = O(N)

// class Solution {
//   public:
//     int findKRotation(vector<int> &arr) {
//         for(int i = 1; i < arr.size(); i++){
//             if(arr[i-1] > arr[i]) return i;
//         }
//         return 0;
//     }
// };


// 2. TC = O(logN)

// class Solution {
//   public:
//     int findKRotation(vector<int> &arr) {
//         int low = 0, high = arr.size() - 1;
    
//         while (low < high) {
//             int mid = low + (high - low) / 2;
    
//             if (mid < high && arr[mid] > arr[mid + 1]) {
//                 return mid + 1;
//             }
//             if (mid > low && arr[mid] < arr[mid - 1]) {
//                 return mid;
//             }
    
//             if (arr[mid] > arr[high]) {
//                 low = mid + 1;
//             } else {
//                 high = mid;
//             }
//         }
    
//         return 0;  // no rotation
//     }
// };
