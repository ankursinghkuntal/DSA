    
    // This code is for zero based indexing using bfs
    
    void bfs(int S, vector<int> adj[], bool vis[]) {
        vis[S] = true;
        queue<int> q;
        q.push(S);
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (int it : adj[node]) {
                if (!vis[it]) {
                    vis[it] = true;
                    q.push(it);
                }
            }
        }
    }
    
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        vector<int> adj[v];
        for (int i = 0; i < e; i++) {
            int u = edges[i][0];
            int w = edges[i][1];
            adj[w].push_back(u);
            adj[u].push_back(w);
        }
        
        int cnt = 0;
        bool vis[v] = {false}; 
        
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                cnt++;
                bfs(i, adj, vis);
            }
        }
        return cnt;
    }