// class Solution {
//   public:
//     int transitionPoint(vector<int> arr) {
//         // code here
//         int idx = -1;
//         for(int i = 0; i < arr.size(); i++){
//             if(arr[i] == 1) { idx = i; break; }
//         }
//         return idx;
//     }
// };


// 2. log(N)
// class Solution {
// public:
//     int transitionPoint(vector<int> arr) {
//         int low = 0;
//         int high = arr.size() - 1;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;
            
//             if (arr[mid] == 1) {
//                 if (mid == 0 || arr[mid - 1] == 0) {
//                     return mid;
//                 }
//                 high = mid - 1;
//             } else {
//                 low = mid + 1;
//             }
//         }
        
//         return -1; // Return -1 if there is no '1' in the array
//     }
// };