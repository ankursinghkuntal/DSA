
// Given a Graph of V vertices and E edges and another edge(c - d), the task is to find if the given edge is a Bridge. i.e., removing the edge disconnects the graph.

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
                
                // Checking for a bridge between S and it
                if (low[it] > insertionTime[S]) {
                    bridges.push_back({S, it});
                }
            } else {
                low[S] = min(low[S], insertionTime[it]);
            }
        }
    }
    
public:
    int isBridge(int V, vector<int> adj[], int c, int d) {
        vector<bool> vis(V, false);
        vector<int> insertionTime(V, 1e8);
        vector<int> low(V, 1e8);
        vector<vector<int>> bridges;
        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                DFS(i, -1, vis, adj, insertionTime, low, bridges);
            }
        }
        
        // Check if {c, d} or {d, c} exists in the bridges
        for (auto bridge : bridges) {
            if ((bridge[0] == c && bridge[1] == d) || (bridge[0] == d && bridge[1] == c)) {
                return 1; // This is a bridge
            }
        }
        return 0; // This is not a bridge
    }
};

int main() {
    Solution solution;
    int V = 5;
    vector<int> adj[V];

    // Example graph
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[1].push_back(3);
    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[4].push_back(3);

    // Example bridge check
    int c = 1, d = 3;
    int result = solution.isBridge(V, adj, c, d);
    
    cout << "Edge " << c << "-" << d << (result ? " is a bridge." : " is not a bridge.") << endl;
    
    return 0;
}
