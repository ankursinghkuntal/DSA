// 1.  sort the array then find the second largest element  TC = O(NlogN) 

// 2.  Time Complexity: O(n)

// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         int n = arr.size();
//         int mx = arr[0];
//         int sec_mx = -1;
//         for(int i = 0; i < n; i++){
//             if(arr[i] == mx) continue;
//             else if(arr[i] > mx){
//                 sec_mx = mx;
//                 mx = arr[i];
//             }
//             else if(arr[i] > sec_mx) sec_mx = arr[i];
//         }
//         return sec_mx;
//     }
// };

