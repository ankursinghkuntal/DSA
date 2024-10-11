    // bool BFS_Detect(int S, bool vis[], vector<int> adj[]) {
    //     vis[S] = true;
    //     queue<pair<int, int>> q;
    //     q.push({S, -1});
        
    //     while (!q.empty()) {
    //         int node = q.front().first;
    //         int parent = q.front().second;
    //         q.pop();
            
    //         for (int adjNode : adj[node]) {
    //             if (!vis[adjNode]) {
    //                 vis[adjNode] = true;
    //                 q.push({adjNode, node});
    //             } else if (parent != adjNode) {
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }
    
    // bool isCycle(int V, vector<int> adj[]) {
    //     bool vis[V] = {false};
        
    //     for (int i = 0; i < V; i++) {
    //         if (!vis[i]) {
    //             if (BFS_Detect(i, vis, adj)) return true;
    //         }
    //     }
    //     return false;
    // }