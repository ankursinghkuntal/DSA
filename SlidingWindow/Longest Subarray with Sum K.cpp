// Given an array arr[] containing integers and an integer k, your task is to find the length of the longest subarray where the 
// sum of its elements is equal to the given value k. If there is no subarray with sum equal to k, return 0.




// class Solution {
//     public:
//       int longestSubarray(vector<int>& arr, int k) {
//           int n = arr.size();
//           int sum = 0;
//           int mx = 0;
//           map<int,int>mp;
//           mp[0] = -1;
//           for(int i = 0; i < n; i++){
//               sum += arr[i];
              
//               int temp = sum - k;
//               if(mp.find(temp) != mp.end()){
//                   mx = max(mx,i-mp[temp]);
//               }
              
//               if(mp.find(sum) == mp.end()){
//                   mp[sum] = i;
//               }
//           }
//           return mx;
//       }
//   };
// // Time Complexity: O(N)
// // Space Complexity: O(N)