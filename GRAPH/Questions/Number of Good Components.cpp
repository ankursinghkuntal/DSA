    
// Given an undirected graph with v vertices(numbered from 1 to v) and e edges. Find the number of good components in the graph.
// A component of the graph is good if and only if the component is fully connected.
// Note: A fully connected component is a subgraph of a given graph such that there's an edge between every pair of vertices in the component,
//  the given graph can be a disconnected graph.
    

    
    // void dfs(int S, vector<int> adj[], bool vis[], vector<int>&components) {
    //     vis[S] = true;
    //     components.push_back(S);
    //     for(int it : adj[S]){
    //         if(!vis[it]){
    //             dfs(it,adj,vis,components);
    //         }
    //     }
    // }
    
    // int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
    //     vector<int> adj[v+1];
    //     for (int i = 0; i < e; i++) {
    //         int u = edges[i][0];
    //         int w = edges[i][1];
    //         adj[w].push_back(u);
    //         adj[u].push_back(w);
    //     }
        
    //     int cnt = 0;
    //     bool vis[v+1] = {false}; 
    //     for (int i = 1; i < v+1; i++) {
    //         if (!vis[i]) {
    //             vector<int>components;
    //             dfs(i, adj, vis, components);
    //             bool isgood = true;
    //             for (int node : components) {
    //                 if (adj[node].size() != components.size() - 1) {
    //                     isgood = false;
    //                 break;
    //                 }
    //             }
    //             if(isgood){
    //                 cnt++;
    //             }
    //         }
    //     }
    //     return cnt;
    // }









    //     void bfs(int S, vector<int> adj[], bool vis[], vector<int>&components) {
    //     vis[S] = true;
    //     queue<int>q;
    //     q.push(S);
    //     while(!q.empty()){
    //         int node = q.front();
    //         components.push_back(node);
    //         q.pop();
    //         for(int it : adj[node]){
    //             if(!vis[it]){
    //                 vis[it] = true;
    //                 q.push(it);
    //             }
    //         }
    //     }
    // }
    
    // int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
    //     vector<int> adj[v+1];
    //     for (int i = 0; i < e; i++) {
    //         int u = edges[i][0];
    //         int w = edges[i][1];
    //         adj[w].push_back(u);
    //         adj[u].push_back(w);
    //     }
        
    //     int cnt = 0;
    //     bool vis[v+1] = {false}; 
    //     for (int i = 1; i < v+1; i++) {
    //         if (!vis[i]) {
    //             vector<int>components;
    //             bfs(i, adj, vis, components);
    //             bool isgood = true;
    //             for (int node : components) {
    //                 if (adj[node].size() != components.size() - 1) {
    //                     isgood = false;
    //                 break;
    //                 }
    //             }
    //             if(isgood){
    //                 cnt++;
    //             }
    //         }
    //     }
    //     return cnt;
    // }