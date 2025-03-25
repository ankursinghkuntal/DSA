// Given an array arr[] of integers and an integer k, your task is to find the maximum value for each contiguous subarray 
// of size k. The output should be an array of maximum values corresponding to each contiguous subarray.


// class Solution {
//     public:
//       vector<int> maxOfSubarrays(vector<int>& arr, int k) {
//           int n = arr.size();
          
//           priority_queue<pair<int,int>>pq;
//           vector<int>ans;
          
//           for(int i = 0; i < k; i++){
//               pq.push({arr[i],i});
//           }
          
//           ans.push_back(pq.top().first);
          
//           for(int i = k; i < n; i++){
//               pq.push({arr[i], i});
              
//               while(pq.top().second <= i-k){
//                   pq.pop();
//               }
              
//               ans.push_back(pq.top().first);
//           }
          
//           return ans;
//       }
//   };

