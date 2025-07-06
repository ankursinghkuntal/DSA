    bool DFS_Based(int S, vector<int>adj[], bool vis[], int parent){
        vis[S] = true;
        for(int adjNode : adj[S]){
            if(!vis[adjNode]){
                if(DFS_Based(adjNode, adj, vis, S)) return true;
            }
            else if(adjNode != parent) return true;
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        bool vis[V] = {false};
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(DFS_Based(i, adj, vis, -1)) return true;
            }
        }
        return false;
    }