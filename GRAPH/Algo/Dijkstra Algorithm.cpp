// Given a weighted, undirected and connected graph of V vertices and an adjacency list adj where adj[i] is a list of lists containing two 
// integers where the first integer of each list j denotes there is edge between i and j , second integers corresponds to the weight of that 
//  edge . You are given the source vertex S and You to Find the shortest distance of all the vertex's from the source vertex S. You have to
//   return a list of integers denoting shortest distance between each node and Source vertex S.
 

// Note: The Graph doesn't contain any negative weight cycle.

// The structure of adjacency list is as follows :-

// For Example : adj = {  {{1, 1}, {2, 6}}  , {{2, 3}, {0, 1}}  , {{1, 3}, {0, 6}}  }

// Here adj[i] contains a list which contains all the nodes which are connected to the ith vertex. Here adj[0] = {{1, 1}, {2, 6}} 
// means there are two nodes conneced to the 0th node, node 1 with an edge weight of 1 and node 2 with an edge weight of 6 and 
// similarly for other vertices.



// Using priority Queue

vector<int> dijkstra(int V, vector<pair<int, int>> adj[], int S) {
    vector<int> dist(V, 1e9);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[S] = 0;
    pq.push({0, S}); // Corrected: {distance, node}

    while (!pq.empty()) {
        int currwt = pq.top().first; // Distance
        int node = pq.top().second;  // Node
        pq.pop();

        if (currwt > dist[node]) continue; // Optimization to skip outdated entries

        for (auto it : adj[node]) {
            int v = it.first;  // Neighbor node
            int wt = it.second; // Edge weight

            if (currwt + wt < dist[v]) {
                dist[v] = currwt + wt;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}
// The above code uses a priority queue to efficiently find the shortest path from the source node S to all other nodes in the graph.
// The graph is represented as an adjacency list, where each node has a list of pairs representing its neighbors and the weights of the edges connecting them.





    // using Set

    // vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
    //     int V = adj.size();
        
    //     vector<int> dis(V, 1e9);
    //     set<pair<int, int>> st; // {distance, node}
    //     st.insert({0, src});
    //     dis[src] = 0;
        
    //     while (!st.empty()) {
    //         auto it = *(st.begin()); // Smallest distance node
    //         int currDis = it.first;
    //         int node = it.second;
    //         st.erase(it);
    
    //         for (auto edge : adj[node]) {
    //             int v = edge.first;   // Neighbor node
    //             int wt = edge.second; // Edge weight
    
    //             if (currDis + wt < dis[v]) {
    //                 if (dis[v] != 1e9) {
    //                     st.erase({dis[v], v}); // Remove outdated entry
    //                 }
    //                 dis[v] = currDis + wt;
    //                 st.insert({dis[v], v}); // Insert updated entry
    //             }
    //         }
    //     }
    //     return dis;
    // }