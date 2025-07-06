  
//   Given a Directed Acyclic Graph of n vertices from 0 to n-1 and a 2D Integer array(or vector) edges[ ][ ] of length m, 
//   where there is a directed edge from edge[i][0] to edge[i][1] with a distance of edge[i][2] for all i.

// Find the shortest path from src(0) vertex to all the vertices and if it is impossible to reach any vertex, then return -1 for that vertex.
  
  
  
  
      void dfs(int S, vector<pair<int,int>>adj[], stack<int>& st, vector<bool>& vis){
        vis[S] = true;
        for(auto it : adj[S]){
            if(!vis[it.first]){
                dfs(it.first, adj, st, vis);
            }
        }
        st.push(S);
      }
      
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        vector<pair<int,int>>adj[N];
        
        for(int i = 0; i < M; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            adj[u].push_back({v,wt});
        }

        vector<bool>vis(N,false);
        stack<int>st;
        for(int i = 0; i < N; i++){
            if(!vis[i]){   
                dfs(i, adj, st, vis);
            }
        }
        
        // manage the distance array
        vector<int>dis(N,INT_MAX);
        int source = 0;
        dis[source] = 0;
        
        while (!st.empty()) {
            int node = st.top();
            st.pop();
    
            if (dis[node] != INT_MAX) {
                for (auto it : adj[node]) {
                    int v = it.first;
                    int wt = it.second;
    
                    // Relax the edge if we find a shorter path
                    if (dis[node] + wt < dis[v]) {
                        dis[v] = dis[node] + wt;
                    }
                }
            }
        }
        
        for (int i = 0; i < N; i++) {
            if (dis[i] == INT_MAX) {
                dis[i] = -1;
            }
        }
        
        return dis;
    }