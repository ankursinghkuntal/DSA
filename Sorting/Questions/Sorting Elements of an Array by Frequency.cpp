
// Given an array of integers arr, sort the array according to the frequency of elements, i.e. elements that have higher frequency comes first.
//  If the frequencies of two elements are the same, then the smaller number comes first.


// class Solution {
// public:
//     static bool mycmp(pair<int, int>& a, pair<int, int>& b) {
//         if (a.second != b.second) return a.second > b.second; // Sort by frequency
//         return a.first < b.first; // Sort by value if frequencies are the same
//     }
    
//     vector<int> sortByFreq(vector<int>& arr) {
//         int n = arr.size();
//         unordered_map<int, int> mp;
//         for (int i = 0; i < n; i++) {
//             mp[arr[i]]++;
//         }
        
//         vector<pair<int, int>> vp;
//         for (auto it : mp) {
//             vp.push_back({it.first, it.second});
//         }
        
//         sort(vp.begin(), vp.end(), mycmp);
        
//         int idx = 0;
//         for (auto it : vp) {
//             int m = it.second;
//             while (m--) {
//                 arr[idx] = it.first;
//                 idx++;
//             }
//         }
//         return arr;
//     }
// };