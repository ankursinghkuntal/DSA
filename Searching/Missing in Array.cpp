// 1.  TC = O(N) && SC = O(N)

// class Solution {
//   public:
//     int missingNumber(vector<int>& arr) {
//         // code here
//         int n = arr.size();
//         int brr[n+2] = {0};
//         for(int i = 0; i < n; i++){
//             brr[arr[i]]++;
//         }
//         for(int i = 1; i < n+2; i++){
//             if(brr[i] == 0) return i;
//         }
//     }
// };


// 2.  TC = O(N) && SC = O(1)

// class Solution {
//   public:
//     int missingNumber(vector<int>& arr) {
//         int n = arr.size();
//         int sum1 = 0;
//         int sum = ((n+1)*(n+2))/2;
//         for(int i = 0; i < n; i++) sum1 += arr[i];
//         return sum - sum1 ;
//     }
// };



// 3. TC = O(N)  &&  SC = O(1)

// class Solution {
// public:
//     int missingNumber(vector<int>& arr) {
//         int n = arr.size();
//         int sum = 0;
        
//         // XOR each element and its corresponding position + 1
//         for (int i = 0; i < n; i++) {
//             sum ^= arr[i];      // XOR with array element
//             sum ^= (i + 1);     // XOR with the expected number in sequence
//         }
        
//         // XOR with n+1 to complete the sequence from 1 to n+1
//         sum ^= (n + 1);
        
//         return sum; // The result is the missing number
//     }
// };
