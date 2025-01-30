// class Solution {
//   public:
//     int getMinDiff(int k, vector<int> &arr) {
//         int n = arr.size();
//         if (n == 1) return 0;

//         sort(arr.begin(), arr.end());
        
//         int ans = arr[n-1] - arr[0];  // Initial difference between max and min
        
//         int smallest = arr[0] + k;
//         int largest = arr[n-1] - k;
        
//         for (int i = 0; i < n - 1; i++) {
//             int min1 = min(smallest, arr[i+1] - k);
//             int max1 = max(largest, arr[i] + k);
//             ans = min(ans, max1 - min1);
//         }
        
//         return ans;
//     }
// };