// The problem is to find the shortest distances between every pair of vertices in a given edge-weighted directed graph. 
// The graph is represented as an adjacency matrix of size n*n. Matrix[i][j] denotes the weight of the edge from i to j. 
// If Matrix[i][j]=-1, it means there is no edge from i to j.
// Note : Modify the distances for every pair in-place.

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the shortest distance between all pairs of nodes
void shortest_distance(vector<vector<int>>& matrix) {
    int n = matrix.size();  // Number of nodes (size of the matrix)

    for (int i = 0; i < n; i++) {
            matrix[i][i] = 0; // Distance from a city to itself is 0
    }
    
    // Floyd-Warshall Algorithm to calculate the shortest distances
    for (int via = 0; via < n; via++) {        // 'via' represents the intermediate node
        for (int i = 0; i < n; i++) {          // 'i' represents the source node
            for (int j = 0; j < n; j++) {      // 'j' represents the destination node
                
                // If there is no direct path between nodes 'i' and 'via' or 'via' and 'j', continue
                if (matrix[i][via] == -1 || matrix[via][j] == -1) continue;
                
                // If there's no current direct path between 'i' and 'j', set it via 'via'
                if (matrix[i][j] == -1) {
                    matrix[i][j] = matrix[i][via] + matrix[via][j];
                } 
                // Else, update the distance between 'i' and 'j' if a shorter path exists via 'via'
                else {
                    matrix[i][j] = min(matrix[i][j], matrix[i][via] + matrix[via][j]);
                }
            }
        }
    }

    // checking for negative cycle
    for(int i = 0; i < n; i++){
        if(matrix[i][i] < 0) cout << "Have Negative Cycle" << endl;
    }


}

int main() {
    // Example input graph represented as a distance matrix.
    // -1 represents no direct path between the nodes.
    vector<vector<int>> matrix = {
        {0, 3, -1, 7},   // Distance from node 0 to others
        {-1, 0, 1, 2},   // Distance from node 1 to others
        {2, -1, 0, -1},  // Distance from node 2 to others
        {-1, -1, 3, 0}   // Distance from node 3 to others
    };
    
    // Call the function to calculate shortest distances using Floyd-Warshall algorithm
    shortest_distance(matrix);
    
    // Output the resulting shortest distance matrix
    cout << "Shortest distances matrix:" << endl;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == -1) {
                cout << "INF" << " ";  // No path available
            } else {
                cout << matrix[i][j] << " ";  // Output the shortest distance
            }
        }
        cout << endl;
    }
    
    return 0;
}
