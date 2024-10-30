// Given a sorted array, arr and a number target, you need to find the number of occurrences of target in arr. 

//1. TC = O(N)   SC = O(logN)
// class Solution {
//   public:
//     int count(vector<int>& arr, int target) {
//         int n = arr.size();
//         unordered_map<int,int>mp;
//         for(int i = 0; i < n; i++){
//             mp[arr[i]]++;
//         }
//         return mp[target];
//     }
// };



// 2.TC = O(N)
// class Solution {
//   public:
//     int count(vector<int>& arr, int target) {
//         int n = arr.size();
//         int cnt = 0;
//         for(int i = 0; i < n; i++){
//             if(arr[i] == target) cnt++;
//         }
//         return cnt;
//     }
// };



// 3. TC = O(logN)

// class Solution {
// public:
//     int findTarget(vector<int>& arr, int target) {
//         int low = 0, high = arr.size() - 1;
//         int mid;
        
//         while (low <= high) {
//             mid = low + (high - low) / 2;

//             // Check if mid is the first occurrence of target
//             if (arr[mid] == target) {
//                 if (mid == 0 || arr[mid - 1] != target) return mid;
//                 high = mid - 1;
//             } 
//             else if (arr[mid] < target) {
//                 low = mid + 1;
//             } 
//             else {
//                 high = mid - 1;
//             }
//         }
//         return -1; // Target not found
//     }

//     int count(vector<int>& arr, int target) {
//         int n = arr.size();
//         int cnt = 0;
        
//         // Find the first occurrence of the target
//         int start = findTarget(arr, target);
//         if (start == -1) return 0; // Target not found in array
        
//         // Count occurrences starting from the first occurrence of target
//         for (int i = start; i < n && arr[i] == target; i++) {
//             cnt++;
//         }
        
//         return cnt;
//     }
// };
