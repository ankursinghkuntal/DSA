
// Given an 2D array intervals of representing intervals where intervals [ i ] = [starti, endi ), return the minimum number of intervals you need 
// to remove to make the rest of the intervals non-overlapping.


// class Solution {
// private:
//     static bool mycmp(vector<int>& a, vector<int>& b) {
//         if (a[0] != b[0]) return a[0] < b[0];
//         return a[1] < b[1];
//     }
// public:
//     int minRemoval(int N, vector<vector<int>> &intervals) {
//         int n = intervals.size();
//         if (n == 0) return 0;
        
//         sort(intervals.begin(), intervals.end(), mycmp);
//         vector<vector<int>> ans;
//         ans.push_back(intervals[n-1]);
        
//         for (int i = n-2; i >= 0; i--) {
//             if (intervals[i][1] > ans.back()[0]) continue;
//             else {
//                 ans.push_back(intervals[i]);
//             }
//         }
        
//         return N - ans.size();
//     }
// };