
// Given an array arr. Find the majority element in the array. If no majority exists, return -1.
// A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

// 1. TC = O(N)  SC = O(N)

// class Solution {
//   public:
//     int majorityElement(vector<int>& arr) {
//         int n = arr.size();
//         unordered_map<int,int>mp;
//         for(int i = 0; i < n; i++){
//             mp[arr[i]]++;
//         }
        
//         int majority = 0;
//         int ans = -1;
//         for(auto it : mp){
//             if(it.second > majority){
//                 ans = it.first;
//                 majority = it.second;
//             }
//         }
//         return (majority > n/2) ? ans : -1;
//     }
// };



// 2.  TC = O(NlogN)   SC = O(1)

// class Solution {
//   public:
//     int majorityElement(vector<int>& arr) {
//         int n = arr.size();
//         if(n==1) return arr[0];
//         int ans, cnt1 = 0, cnt  = 1;
//         sort(arr.begin(), arr.end());
//         for(int i = 1; i < n; i++){
//             if(arr[i] == arr[i-1]) cnt++;
//             else cnt = 1;
//             if(cnt1 < cnt){
//                 cnt1 = cnt;
//                 ans = arr[i];
//             }
//         }
//         return (cnt1 > n/2) ? ans : -1;
//     }
// };


// 3. using two nested loops