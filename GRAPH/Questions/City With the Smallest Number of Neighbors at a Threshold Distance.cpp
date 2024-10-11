// There are n cities labeled from 0 to n-1 with m edges connecting them. Given the array edges where edges[i] = [fromi , toi ,weighti] 
//  represents a bidirectional and weighted edge between cities fromi and toi, and given the integer distanceThreshold. You need to find
//   out a city with the smallest number of cities that are reachable through some path and whose distance is at most Threshold Distance.
//    If there are multiple such cities, our answer will be the city with the greatest label.

// Note: The distance of a path connecting cities i and j is equal to the sum of the edge's weights along that path.


#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int findCity(int n, int m, vector<vector<int>>& edges, int distanceThreshold) {
    vector<vector<int>> adj(n, vector<int>(n, -1));
    
    for (int i = 0; i < n; i++) {
        adj[i][i] = 0; // Distance from a city to itself is 0
    }
    
    for (auto edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        adj[u][v] = wt;
        adj[v][u] = wt;
    }

    for (int via = 0; via < n; via++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[i][via] == -1 || adj[via][j] == -1) continue;
                if (adj[i][j] == -1) {
                    adj[i][j] = adj[i][via] + adj[via][j]; 
                } else {
                    adj[i][j] = min(adj[i][j], adj[i][via] + adj[via][j]);
                }
            }
        }
    }

    int minCount = INT_MAX;
    int cityIndex = -1;

    for (int i = 0; i < n; i++) {
        int reachableCount = 0;
        for (int j = 0; j < n; j++) {
            if (adj[i][j] != -1 && adj[i][j] <= distanceThreshold) {
                reachableCount++;
            }
        }
        if (reachableCount < minCount || (reachableCount == minCount && i > cityIndex)) {
            minCount = reachableCount;
            cityIndex = i;
        }
    }

    return cityIndex;
}

int main() {
    int n = 4; // number of cities
    int m = 4; // number of edges
    vector<vector<int>> edges = {{0, 1, 3}, {1, 2, 1}, {2, 3, 4}, {0, 3, 7}};
    int distanceThreshold = 4;

    int result = findCity(n, m, edges, distanceThreshold);
    cout << "City with the smallest number of reachable cities: " << result << endl;

    return 0;
}
