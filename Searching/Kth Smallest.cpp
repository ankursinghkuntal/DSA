// Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest element in the 
// given array.

// Follow up: Don't solve it using the inbuilt sort function.


// 1. TC = O(logN)

// class Solution {
//   public:
//     // arr : given array
//     // k : find kth smallest element and return using this function
//     int kthSmallest(vector<int> &arr, int k) {
//         // code here
//         if(k > arr.size()) return -1;
//         sort(arr.begin(),arr.end());
//         return arr[k-1];
//     }
// };


// 2. TC = O(n)   SC = O(n)

// class Solution {
//   public:
//     // arr : given array
//     // k : find kth smallest element and return using this function
//     int kthSmallest(vector<int> &arr, int k) {
//         int n = arr.size();
//         if(k > arr.size()) return -1;
//         priority_queue<int>pq; // max heap
//         for(int i = 0; i < n; i++){
//             pq.push(arr[i]);
//         }
//         k = n-k;
//         while(k--){
//             pq.pop();
//         }
//         return pq.top();
//     }
// };