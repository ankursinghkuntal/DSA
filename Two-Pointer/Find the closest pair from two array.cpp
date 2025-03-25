// Given two sorted arrays arr and brr and a number x, find the pair whose sum is closest to x and the pair has an element from each array. In the case of multiple closest pairs return any one of them.
// Note: Can return the two numbers in any manner. The driver code takes care of the printing of the closest difference.



// class Solution{
//     public:
//       vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
          
//           if(arr[0] < brr[0]){
//               return printClosest(brr, arr, m, n, x);
//           }
          
//           int first = 0, second = m-1;
          
//           int diff = INT_MAX;
//           vector<int>ans;
          
//           while(first < n && second >= 0){
//               if(abs(arr[first]+brr[second]-x) < diff){
//                   diff = abs(arr[first]+brr[second]-x);
//                   ans = {arr[first], brr[second]};
//               }
              
//               if(arr[first]+brr[second] < x){
//                   first++;
//               }else{
//                   second--;
//               }
//           }
          
//           return ans;
//       }
//   };
