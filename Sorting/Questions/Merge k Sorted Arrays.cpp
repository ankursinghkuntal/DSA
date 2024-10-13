// Given k sorted arrays arranged in the form of a matrix of size k * k. The task is to merge them into one sorted array. Return the merged 
// sorted array ( as a pointer to the merged sorted arrays in cpp, as an ArrayList in java, and list in python).


// class Solution {
// public:
//     vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
//         priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        
//         for (int i = 0; i < K; i++) {
//             pq.push({arr[i][0], {i, 0}});
//         }
        
//         vector<int> ans;
        
//         while (!pq.empty()) {
//             auto node = pq.top();
//             pq.pop();
            
//             int arr_num = node.second.first;
//             int arr_ele_num = node.second.second;
//             int ele = node.first;
            
//             ans.push_back(ele);
            
//             if (arr_ele_num + 1 < arr[arr_num].size()) {
//                 pq.push({arr[arr_num][arr_ele_num + 1], {arr_num, arr_ele_num + 1}});
//             }
//         }
        
//         return ans;
//     }
// };