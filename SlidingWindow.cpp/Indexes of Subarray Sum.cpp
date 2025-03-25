// Given an array arr[] containing only non-negative integers, your task is to find a continuous subarray (a contiguous sequence of elements)
//  whose sum equals a specified value target. You need to return the 1-based indices of the leftmost and rightmost elements of this 
//  subarray. You need to find the first subarray whose sum is equal to the target.




// class Solution {
//     public:
//       vector<int> subarraySum(vector<int> &arr, int target) {
//           int left = 0, right = 0;
          
//           int sum = arr[0];
          
//           while(left < arr.size()){
              
//               if(sum == target) return {left+1, right+1};
              
//               if(sum > target){
//                   sum -= arr[left];
//                   left+=1;
//               }else{
//                   if(right == arr.size()-1) return {-1};
//                   right += 1;
//                   sum += arr[right];
//               }
              
//           }
//           return {-1};
//       }
//   };