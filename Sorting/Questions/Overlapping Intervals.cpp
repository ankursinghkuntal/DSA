// Given a collection of Intervals, the task is to merge all of the overlapping Intervals.

// class Solution {
// private:
//     static bool mycmp(vector<int>& a, vector<int>& b) {
//         return a[0] < b[0];
//     }
// public:
//     vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
//         int n = intervals.size();
//         if (n == 0) return {};
//         sort(intervals.begin(), intervals.end(), mycmp);
//         vector<vector<int>> ans;
//         ans.push_back(intervals[0]);
        
//         for (int i = 1; i < n; i++) {
//             if (intervals[i][0] <= ans.back()[1]) {
//                 ans.back()[1] = max(ans.back()[1], intervals[i][1]);
//             } else {
//                 ans.push_back(intervals[i]);
//             }
//         }
        
//         return ans;
//     }
// };