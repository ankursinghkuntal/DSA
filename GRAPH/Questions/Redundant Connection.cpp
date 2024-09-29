    
// In this problem, a tree is an undirected graph that is connected and has no cycles.
// You are given a graph that started as a tree with n nodes labeled from 1 to n, with one additional edge added. 
// The added edge has two different vertices chosen from 1 to n, and was not an edge that already existed.
// The graph is represented as an array edges of length n where edges[i] = [ai, bi] indicates that there is
// an edge between nodes ai and bi in the graph.

// Return an edge that can be removed so that the resulting graph is a tree of n nodes. If there are multiple answers, 
// return the answer that occurs last in the input.
    
    
    
    
    // bool BFS_Detect(int S, vector<bool>& vis, vector<int> adj[]) {
    //     vis[S] = true;
    //     queue<pair<int, int>> q;
    //     q.push({S, -1});
    //     while (!q.empty()) {
    //         int node = q.front().first;
    //         int parent = q.front().second;
    //         q.pop();
    //         for (auto adjNode : adj[node]) {
    //             if (!vis[adjNode]) {
    //                 vis[adjNode] = true;
    //                 q.push({adjNode, node});
    //             } else if (adjNode != parent) {
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }

    // vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    //     int V = edges.size();
    //     vector<int> adj[V+1];
        
    //     for (int i = 0; i < edges.size(); i++) {
    //         int u = edges[i][0];
    //         int v = edges[i][1];
            
    //         vector<bool> vis(V+1, false);
            
    //         adj[u].push_back(v);
    //         adj[v].push_back(u);
            
    //         if (BFS_Detect(u, vis, adj)) {
    //             return {u, v};
    //         }
    //     }
        
    //     return {};
    // }