    vector<int>dfs(int V, vector<int>adj[],bool vis[], int S, vector<int>&DFS){
        vis[S] = true;
        DFS.push_back(S);
        for(int it : adj[S]){
            if(!vis[it]){
                dfs(V,adj,vis,it,DFS);
            }
        }
        return DFS;
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>DFS;
        bool vis[V] = {false};
        return dfs(V,adj,vis,0,DFS);
    }


   