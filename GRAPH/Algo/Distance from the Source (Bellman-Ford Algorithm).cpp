// Given a weighted and directed graph of V vertices and E edges, Find the shortest distance of all the vertex's from the source vertex S.
//  If a vertices can't be reach from the S then mark the distance as 10^8. Note: If the Graph contains a negative cycle then return an array 
//  consisting of only -1


#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
    vector<int> dist(V, 1e8);
    dist[S] = 0;

    // Relax all edges (V - 1) times
    for (int i = 0; i < V - 1; i++) {
        for (auto it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            if (dist[u] != 1e8 && (dist[u] + wt < dist[v])) {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // Check for negative-weight cycles
    for (auto it : edges) {
        int u = it[0];
        int v = it[1];
        int wt = it[2];

        if (dist[u] != 1e8 && (dist[u] + wt < dist[v])) {
            return { -1 };  // Negative cycle detected
        }
    }

    return dist;
}

int main() {
    int V = 5;  // Number of vertices
    vector<vector<int>> edges = {
        {0, 1, -1},
        {0, 2, 4},
        {1, 2, 3},
        {1, 3, 2},
        {1, 4, 2},
        {3, 2, 5},
        {3, 1, 1},
        {4, 3, -3}
    };

    int source = 0;  // Starting point

    vector<int> result = bellman_ford(V, edges, source);

    if (result[0] == -1) {
        cout << "Negative weight cycle detected." << endl;
    } else {
        cout << "Shortest distances from source vertex " << source << ":" << endl;
        for (int i = 0; i < V; i++) {
            if (result[i] == 1e8) {
                cout << i << ": INF" << endl;
            } else {
                cout << i << ": " << result[i] << endl;
            }
        }
    }

    return 0;
}
