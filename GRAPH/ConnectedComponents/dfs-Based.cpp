// 1 based indexing in which edges are given

void dfs(int S, vector<int> adj[], bool vis[]) {
    vis[S] = true;
    for (int it : adj[S]) {
        if (!vis[it]) {
            dfs(it, adj, vis);
        }
    }
}

int findNumberOfGoodComponent(int e, int v, vector<vector<int>>& edges) {
    vector<int> adj[v+1];
    for (int i = 0; i < e; i++) {
        int u = edges[i][0];
        int w = edges[i][1];
        adj[u].push_back(w);
        adj[w].push_back(u);
    }
    
    int cnt = 0;
    bool vis[v+1] = {false};

    for (int i = 1; i <= v; i++) {
        if (!vis[i]) {
            cnt++;
            dfs(i, adj, vis);
        }
    }
    return cnt;
}
