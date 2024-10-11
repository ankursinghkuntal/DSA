// You are given an Undirected Graph having unit weight of the edges, find the shortest path from src to all the vertex and if
//  it is unreachable to reach any vertex, then return -1 for that vertex.




    // vector<int> shortestPath(vector<vector<int>>& edges, int N, int M, int src) {
        
    //     vector<pair<int, int>> adj[N];
    //     for (int i = 0; i < M; i++) {
    //         int u = edges[i][0];
    //         int v = edges[i][1];
    //         int wt = 1;
    //         adj[u].push_back({v, wt});
    //         adj[v].push_back({u, wt});
    //     }
        
    //     vector<int> dist(N, INT_MAX);
        
    //     queue<pair<int, int>> q;
    //     dist[src] = 0;
        
    //     q.push({src, 0});
        
    //     while (!q.empty()) {
    //         int node = q.front().first;
    //         int currDist = q.front().second;
    //         q.pop();
    
    //         for (auto it : adj[node]) {
    //             int v = it.first;
    //             int wt = it.second;
                
    //             if (dist[v] > currDist + wt) {
    //                 dist[v] = currDist + wt;
    //                 q.push({v, dist[v]});
    //             }
    //         }
    //     }
        
    //     for (int i = 0; i < N; i++) {
    //         if (dist[i] == INT_MAX) dist[i] = -1;
    //     }
        
    //     return dist;
    // }