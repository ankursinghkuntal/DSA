// Given an undirected connected graph with V vertices and adjacency list adj. You are required to find all the vertices 
// removing which (and edges through it) disconnects the graph into 2 or more components and return it in sorted manner.
// Note: Indexing is zero-based i.e nodes numbering from (0 to V-1). There might be loops present in the graph.

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int timer = 0;
    
    void DFS(int S, int parent, vector<bool>& vis, vector<int> adj[], vector<int>& insertionTime, vector<int>& low, vector<int>& mark, int& rootChildren) {
        vis[S] = true;
        insertionTime[S] = timer;
        low[S] = timer;
        timer++;
        
        for (auto it : adj[S]) {
            if (it == parent) continue;
            
            if (!vis[it]) {
                if (parent == -1) rootChildren++; // Count children of the root
                
                DFS(it, S, vis, adj, insertionTime, low, mark, rootChildren);
                low[S] = min(low[S], low[it]);
                
                // If S is not the root and low[it] >= insertionTime[S], it's an articulation point
                if (low[it] >= insertionTime[S] && parent != -1) {
                    mark[S] = 1;
                }
            } else {
                low[S] = min(low[S], insertionTime[it]);
            }
        }
        
        // Special case for root: if root has more than one child, it's an articulation point
        if (parent == -1 && rootChildren > 1) {
            mark[S] = 1;
        }
    }
    
public:
    vector<int> articulationPoints(int V, vector<int> adj[]) {
        vector<bool> vis(V, false);
        vector<int> insertionTime(V, 1e8);
        vector<int> low(V, 1e8);
        vector<int> mark(V, 0); // To mark articulation points
        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                int rootChildren = 0;
                DFS(i, -1, vis, adj, insertionTime, low, mark, rootChildren);
            }
        }
        
        vector<int> artPoints;
        for (int i = 0; i < V; i++) {
            if (mark[i] == 1) artPoints.push_back(i);
        }
        
        return (artPoints.size() > 0) ? artPoints : vector<int>{-1};
    }
};

int main() {
    Solution solution;
    int V = 5; // Number of vertices
    vector<int> adj[V]; // Adjacency list for the graph
    
    // Example edges
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[1].push_back(3);
    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[4].push_back(3);

    vector<int> articulationPoints = solution.articulationPoints(V, adj);
    
    // Output articulation points
    for (int point : articulationPoints) {
        cout << point << " ";
    }
    
    return 0;
}
