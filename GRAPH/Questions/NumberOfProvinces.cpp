
// There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b 
// is connected directly with city c, then city a is connected indirectly with city c.

// A province is a group of directly or indirectly connected cities and no other cities outside of the group.

// You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, 
// and isConnected[i][j] = 0 otherwise.

// Return the total number of provinces.

// 1.
    // void dfs(vector<vector<int>>&isConnected,vector<bool>&visited,int i){
    //     visited[i] = true;
    //     for(int j=0;j<isConnected.size();j++){
    //         if(isConnected[i][j]==1 && !visited[j]){
    //             dfs(isConnected,visited,j);
    //         }
    //     }
    // }
    
    // int findCircleNum(vector<vector<int>>& isConnected) {
    //     vector<bool>visited(isConnected.size(),false);
    //     int count = 0;
    //     for(int i=0;i<isConnected.size();i++){
    //         if(!visited[i]){
    //             count++;
    //             dfs(isConnected,visited,i);
    //         }
    //     }
    //     return count;
    // }




// 2.
    //     void bfs(vector<vector<int>>&isConnected,vector<bool>&vis,int i){
    //     vis[i] = true;
    //     queue<int>q;
    //     q.push(i);
    //     while(!q.empty()){
    //         int node = q.front();
    //         q.pop();
    //         for(int j = 0; j < isConnected[0].size(); j++){
    //             if(isConnected[node][j] == 1  && !vis[j]){
    //                 vis[j] = true;
    //                 q.push(j);
    //             } 
    //         }
    //     }
    // }

    // int findCircleNum(vector<vector<int>>& isConnected) {
    //     vector<bool>vis(isConnected.size(),false);
    //     int count = 0;
    //     for(int i=0;i<isConnected.size();i++){
    //         if(!vis[i]){
    //             count++;
    //             bfs(isConnected,vis,i);
    //         }
    //     }
    //     return count;
    // }














// Using DisJoint Set DataStructure


// class DisJoint {
// public:
//     vector<int> rank, parent, size;

//     DisJoint(int n) {
//         rank.resize(n+1, 0);
//         parent.resize(n+1);
//         size.resize(n+1, 1);

//         for (int i = 0; i < n+1; i++) {
//             parent[i] = i;
//         }
//     }

//     int findUltimateParent(int node) {
//         if (node == parent[node]) {
//             return node;
//         }
//         return parent[node] = findUltimateParent(parent[node]);
//     }

//     void UnionByRank(int u, int v) {
//         int ult_parent_u = findUltimateParent(u);
//         int ult_parent_v = findUltimateParent(v);
//         if (ult_parent_u == ult_parent_v) return;

//         if (rank[ult_parent_u] > rank[ult_parent_v]) {
//             parent[ult_parent_v] = ult_parent_u;
//         } else if (rank[ult_parent_u] < rank[ult_parent_v]) {
//             parent[ult_parent_u] = ult_parent_v;
//         } else {
//             parent[ult_parent_v] = ult_parent_u;
//             rank[ult_parent_u]++;
//         }
//     }

//     void UnionBySize(int u, int v) {
//         int ult_parent_u = findUltimateParent(u);
//         int ult_parent_v = findUltimateParent(v);
//         if (ult_parent_u == ult_parent_v) return;

//         if (size[ult_parent_u] >= size[ult_parent_v]) {
//             parent[ult_parent_v] = ult_parent_u;
//             size[ult_parent_u] += size[ult_parent_v];
//         } else {
//             parent[ult_parent_u] = ult_parent_v;
//             size[ult_parent_v] += size[ult_parent_u];
//         }
//     }
// };


// class Solution {
//   public:
//     int numProvinces(vector<vector<int>> adj, int V) {
//         // code here
//         DisJoint ds(V);
//         for(int i = 0; i < adj.size(); i++){
//             for(int j = 0; j < adj[0].size(); j++){
//                 if(adj[i][j] == 1){
//                     ds.UnionBySize(i,j);
//                 }
//             }
//         }
//         int cnt = 0;
//         for(int i = 0; i < V; i++){
//             if(ds.parent[i] == i) cnt++;
//         }
//         return cnt;
//     }
// };