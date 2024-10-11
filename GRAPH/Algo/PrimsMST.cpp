// Given a weighted, undirected, and connected graph with V vertices and E edges, your task is to find the sum of the weights of the edges 
// in the Minimum Spanning Tree (MST) of the graph. The graph is represented by an adjacency list, where each element adj[i] is a vector 
// containing vector of integers. Each vector represents an edge, with the first integer denoting the endpoint of the edge and the second 
// integer denoting the weight of the edge.





    // int spanningTree(int V, vector<vector<int>> adj[])
    // {
    //     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    //     vector<bool> vis(V, false);
    //     int sum = 0;
    
    //     pq.push({0, 0});
    
    //     while (!pq.empty()) {
    //         int wt = pq.top().first;
    //         int node = pq.top().second;
    //         pq.pop();
    
    //         if (vis[node]) continue;
    
    //         sum += wt;
    //         vis[node] = true;
    
    //         for (auto it : adj[node]) {
    //             int adjNode = it[0];
    //             int wt2 = it[1];
    
    //             if (!vis[adjNode]) {
    //                 pq.push({wt2, adjNode});
    //             }
    //         }
    //     }
        
    //     return sum;
    // }