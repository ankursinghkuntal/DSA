// You are given a weighted undirected graph having n vertices numbered from 1 to n and m edges along with their weights. Find the 
// shortest weight path between the vertex 1 and the vertex n,  if there exists a path, and return a list of integers whose first 
// element is the weight of the path, and the rest consist of the nodes on that path. If no path exists, then return a list containing
//  a single element -1.

// The input list of edges is as follows - {a, b, w}, denoting there is an edge between a and b, and w is the weight of that edge.

// Note: The driver code here will first check if the weight of the path returned is equal to the sum of the weights along the nodes 
// on that path, if equal it will output the weight of the path, else -2. In case the list contains only a single element (-1) it will 
// simply output -1.





    // vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
    //     vector<pair<int, int>> adj[n + 1];
    //     for (int i = 0; i < m; i++) {
    //         int u = edges[i][0];
    //         int v = edges[i][1];
    //         int wt = edges[i][2];
    //         adj[u].push_back({v, wt});
    //         adj[v].push_back({u, wt});
    //     }
    
    //     vector<int> dist(n + 1, 1e9);
    //     vector<int> parent(n + 1);
    //     for(int i = 1; i <= n; i++) parent[i] = i;
    
    //     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
    //     dist[1] = 0;
    //     parent[1] = 1;
    //     pq.push({0, 1});
    
    //     while (!pq.empty()) {
    //         int currDist = pq.top().first;
    //         int node = pq.top().second;
    //         pq.pop();
    
    //         for (auto it : adj[node]) {
    //             int v = it.first;
    //             int weight = it.second;
    
    //             if (currDist + weight < dist[v]) {
    //                 dist[v] = currDist + weight;
    //                 parent[v] = node;
    //                 pq.push({dist[v], v});
    //             }
    //         }
    //     }
    
    //     if (dist[n] == 1e9) {
    //         return {-1};
    //     }
    
    //     vector<int> path;
    //     int node = n;
    //     while (parent[node] != node) {
    //         path.push_back(node);
    //         node = parent[node];
    //     }
    //     path.push_back(1);
    //     reverse(path.begin(), path.end());
    
    //     path.insert(path.begin(), dist[n]);
    //     return path;
    // }