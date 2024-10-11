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
    // vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    // {
    //     vector<int>dist(V,1e9);
    //     priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
    //     dist[S] = 0;
    //     pq.push({S,0});
    //     while(!pq.empty()){
    //         int node = pq.top().first;
    //         int currwt = pq.top().second;
    //         pq.pop();
    //         for(auto it : adj[node]){
    //             int v = it[0];
    //             int wt = it[1];
    //             if(currwt + wt < dist[v]){
    //                 dist[v] = currwt + wt;
    //                 pq.push({v, dist[v]});
    //             }
    //         }
    //     }
    //     return dist;
    // }





    // using Set
    // vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    // {
    //     vector<int>dist(V,1e9);
    //     set<pair<int,int>>st;
    //     st.insert({S,0});
    //     dist[S] = 0;
    //     while(!st.empty()){
    //         auto it = *(st.begin());
    //         int node = it.first;
    //         int currwt = it.second;
    //         st.erase(it);
    //         for(auto it : adj[node]){
    //             int v = it[0];
    //             int wt = it[1];
    //             if(currwt + wt < dist[v]){
    //                 if(dist[v] != 1e9) {
    //                     st.erase({v,dist[v]});
    //                 }
    //                 dist[v] = currwt + wt;
    //                 st.insert({v,dist[v]});
    //             }
    //         }
            
    //     }
    //     return dist;
    // }