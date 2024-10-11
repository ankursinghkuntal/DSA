// There are n servers numbered from 0 to n - 1 connected by undirected server-to-server connections forming a network where 
// connections[i] = [ai, bi] represents a connection between servers ai and bi. Any server can reach other servers directly or 
// indirectly through the network.

// A critical connection is a connection that, if removed, will make some servers unable to reach some other server.

// Return all critical connections in the network in any order.



#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int timer = 0;
    
    void DFS(int S, int parent, vector<bool>& vis, vector<int> adj[], vector<int>& insertionTime, vector<int>& low, vector<vector<int>>& bridges) {
        vis[S] = true;
        insertionTime[S] = timer;
        low[S] = timer;
        timer++;
        
        for (auto it : adj[S]) {
            if (it == parent) continue;
            
            if (!vis[it]) {
                DFS(it, S, vis, adj, insertionTime, low, bridges);
                low[S] = min(low[S], low[it]);
                // Checking for bridge between S and it
                if (low[it] > insertionTime[S]) {
                    bridges.push_back({it, S});
                }
            } else {
                low[S] = min(low[S], low[it]);
            }
        }
    }
    
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        for (auto it : connections) {
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> vis(n, false);
        vector<int> insertionTime(n, 1e8);
        vector<int> low(n, 1e8);
        vector<vector<int>> bridges;
        
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                DFS(i, -1, vis, adj, insertionTime, low, bridges);
            }
        }
        
        return bridges;
    }
};

int main() {
    Solution solution;
    int n = 5; // Number of nodes
    vector<vector<int>> connections = {{0, 1}, {1, 2}, {2, 0}, {1, 3}, {3, 4}};
    
    vector<vector<int>> result = solution.criticalConnections(n, connections);
    
    // Output the bridges
    for (auto bridge : result) {
        cout << bridge[0] << " - " << bridge[1] << endl;
    }
    
    return 0;
}
