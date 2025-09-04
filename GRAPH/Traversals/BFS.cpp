    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> BFS;
        vector<bool> vis(V, false);
        
        queue<int> q;
        vis[0] = true;
        q.push(0);
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            BFS.push_back(node);
            
            for (int it : adj[node]) {
                if (!vis[it]) {
                    vis[it] = true;
                    q.push(it);
                }
            }
        }
        
        return BFS;
    }