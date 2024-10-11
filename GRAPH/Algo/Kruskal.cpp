#include <bits/stdc++.h>
using namespace std;

class DisJoint {
    vector<int> rank, parent, size;

public:
    DisJoint(int n) {
        rank.resize(n+1, 0);
        parent.resize(n+1);
        size.resize(n+1, 1);

        for (int i = 0; i < n+1; i++) {
            parent[i] = i;
        }
    }

    int findUltimateParent(int node) {
        if (node == parent[node]) {
            return node;
        }
        return parent[node] = findUltimateParent(parent[node]);
    }

    void UnionByRank(int u, int v) {
        int ult_parent_u = findUltimateParent(u);
        int ult_parent_v = findUltimateParent(v);
        if (ult_parent_u == ult_parent_v) return;

        if (rank[ult_parent_u] > rank[ult_parent_v]) {
            parent[ult_parent_v] = ult_parent_u;
        } else if (rank[ult_parent_u] < rank[ult_parent_v]) {
            parent[ult_parent_u] = ult_parent_v;
        } else {
            parent[ult_parent_v] = ult_parent_u;
            rank[ult_parent_u]++;
        }
    }

    void UnionBySize(int u, int v) {
        int ult_parent_u = findUltimateParent(u);
        int ult_parent_v = findUltimateParent(v);
        if (ult_parent_u == ult_parent_v) return;

        if (size[ult_parent_u] >= size[ult_parent_v]) {
            parent[ult_parent_v] = ult_parent_u;
            size[ult_parent_u] += size[ult_parent_v];
        } else {
            parent[ult_parent_u] = ult_parent_v;
            size[ult_parent_v] += size[ult_parent_u];
        }
    }
};

class Solution {
public:
    int spanningTree(int V, vector<vector<int>> adj[]) {
        vector<pair<int, pair<int, int>>> edges;
        for (int i = 0; i < V; i++) {
            for (auto it : adj[i]) {
                int v = it[0];
                int wt = it[1];
                edges.push_back({wt, {i, v}});
            }
        }
        DisJoint ds(V);
        sort(edges.begin(), edges.end());
        int MST_Wt = 0;
        for (auto it : edges) {
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;

            if (ds.findUltimateParent(u) != ds.findUltimateParent(v)) {
                MST_Wt += wt;
                ds.UnionBySize(u, v);
            }
        }
        return MST_Wt;
    }
};

int main() {
    int V = 5; // Number of vertices
    vector<vector<int>> adj[V];

    adj[0].push_back({1, 2});
    adj[0].push_back({3, 6});
    adj[1].push_back({0, 2});
    adj[1].push_back({3, 8});
    adj[1].push_back({4, 5});
    adj[2].push_back({3, 7});
    adj[3].push_back({0, 6});
    adj[3].push_back({1, 8});
    adj[3].push_back({2, 7});
    adj[4].push_back({1, 5});

    Solution obj;
    int mst_weight = obj.spanningTree(V, adj);
    cout << "Weight of MST: " << mst_weight << endl;

    return 0;
}
