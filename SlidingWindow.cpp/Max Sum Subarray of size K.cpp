// Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.



// class Solution {
//     public:
//       int maximumSumSubarray(vector<int>& arr, int k) {
//           int n = arr.size();
          
//           int left = 0;
//           int sum = 0;
          
//           int i = 0;
//           for(i = 0; i < k; i++){
//               sum += arr[i];
//           }
          
//           if(n == k) return sum;
          
//           int ans = sum;
          
//           for(int j = i; j < n; j++){
//               sum -= arr[left];
//               left++;
//               sum += arr[j];
//               ans = max(sum, ans);
//           }
          
//           return ans;
//       }
//   };
  