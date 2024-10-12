// You are maintaining a project that has n methods numbered from 0 to n - 1.

// You are given two integers n and k, and a 2D integer array invocations, where invocations[i] = [ai, bi] indicates that method ai invokes method bi.

// There is a known bug in method k. Method k, along with any method invoked by it, either directly or indirectly, are considered suspicious and we 
// aim to remove them.

// A group of methods can only be removed if no method outside the group invokes any methods within it.

// Return an array containing all the remaining methods after removing all the suspicious methods. You may return the answer in any order.
//  If it is not possible to remove all the suspicious methods, none should be removed.



// class Solution {
// public:
//     void bfs(int S, vector<int> adj[], vector<int>& vis, int mark) {
//         vis[S] = mark;
//         queue<int> q;
//         q.push(S);
//         while (!q.empty()) {
//             int node = q.front();
//             q.pop();
//             for (int it : adj[node]) {
//                 if (vis[it] != mark) {
//                     vis[it] = mark;
//                     q.push(it);
//                 }
//             }
//         }
//     }

//     vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
//         vector<int> adj[n];

//         for (auto pair : invocations) {
//             int u = pair[0];
//             int v = pair[1];
//             adj[u].push_back(v);
//         }

//         vector<int> vis(n, 0);
//         bfs(k, adj, vis, 2);

//         vector<int>check;
//         for(int i = 0; i < n; i++){
//             if(vis[i] == 2) check.push_back(i);
//         }

//         for (int i = 0; i < n; i++) {
//             if (vis[i] != 1 && i != k && vis[i] != 2) {
//                 bfs(i, adj, vis, 1);
//             }
//         }

//         int res = 0;
//         for(int i = 0; i < check.size(); i++){
//             if(vis[check[i]] == 1) {res = 1; break;} 
//         }

//         vector<int> ans;
//         if(res == 1){
//             for (int i = 0; i < n; i++) {
//                 ans.push_back(i);
//             }
//             return ans;
//         }
//         for (int i = 0; i < n; i++) {
//             if (vis[i] == 1) {
//                 ans.push_back(i);
//             }
//         }

//         return ans;
//     }
// };
