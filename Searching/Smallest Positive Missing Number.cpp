
// TC = O(NlogN)

// class Solution {
// public:
//     int missingNumber(vector<int> &arr) {
//         int n = arr.size();
//         sort(arr.begin(),arr.end());
//         int cnt = 1;
//         for(int i = 0; i < n; i++) {
//             if(arr[i] == cnt) cnt++;
//         }
//         return cnt;
//     }
// };




// TC = O(n)    SC = O(n)

// class Solution {
// public:
//     int missingNumber(vector<int> &arr) {
//         int n = arr.size();
//         vector<bool>vis(n+2);
//         for(int i = 0; i < n; i++){
//             if(arr[i] >= 0 && arr[i] <= n+2) vis[arr[i]] = true;
//         }
//         for(int i = 1; i < n+2; i++){
//             if(!vis[i]) return i;
//         }
//     }
// };




// TC = O(n)   SC = O(1)

// class Solution {
// public:
//     int missingNumber(vector<int> &arr) {
//         int n = arr.size();
        
//         for (int i = 0; i < n; i++) {
//             while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
//                 swap(arr[i], arr[arr[i] - 1]);
//             }
//         }

//         for (int i = 0; i < n; i++) {
//             if (arr[i] != i + 1) {
//                 return i + 1;
//             }
//         }

//         return n + 1;
//     }
// };