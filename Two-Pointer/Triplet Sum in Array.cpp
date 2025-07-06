// Given an array arr[] and an integer target, determine if there exists a triplet in the array whose sum equals the given target.

// Return true if such a triplet exists, otherwise, return false.

// class Solution {
//     public:
//       bool hasTripletSum(vector<int> &arr, int target) {
//           int n = arr.size();
          
//           // for(int i = 0; i < n-2; i++){
              
//           //     unordered_set<int>st;
              
//           //     for(int j = i+1; j < n; j++){
//           //         int second = target - arr[i] - arr[j];
                  
//           //         if(st.find(second) != st.end()) return true;
                  
//           //         st.insert(arr[j]);
//           //     }
//           // }
          
//           // return false;

        // Time Complexity: O(N^2)
        // Space Complexity: O(N)   
          
          
//           sort(arr.begin(), arr.end());
          
//           for(int i = 0; i < n; i++){
//               int left = i+1, right = n-1;
              
//               int sum = arr[i]+arr[left]+arr[right];
//               while(left < right){
//                   if(sum == target) return true;
//                   else if(sum < target){
//                       sum -= arr[left];
//                       left+=1;
//                       sum += arr[left];
//                   }else{
//                       sum -= arr[right];
//                       right-=1;
//                       sum += arr[right];
//                   }
//               }
//           }
//           return false;
        // Time Complexity: O(N^2)
        // Space Complexity: O(1)
//       }
//   };