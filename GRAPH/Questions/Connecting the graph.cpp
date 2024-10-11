// You are given a graph with n vertices (0 to n-1) and m edges. You can remove one edge from anywhere and add that edge between any two 
// vertices in one operation. Find the minimum number of operations that will be required to connect the graph.
// If it is not possible to connect the graph, return -1.

#include <bits/stdc++.h>
using namespace std;

class DisJoint {
public:
    vector<int> rank, parent, size;

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
    int Solve(int n, vector<vector<int>>& edge) {
        DisJoint ds(n);
        int ExtraEdges = 0;

        for(auto it : edge) {
            int u = it[0];
            int v = it[1];
            
            if(ds.findUltimateParent(u) == ds.findUltimateParent(v)) {
                ExtraEdges++;
            } else {
                ds.UnionBySize(u, v);
            }
        }

        int NumComponents = 0;
        for(int i = 0; i < n; i++) {
            if(ds.findUltimateParent(i) == i) {
                NumComponents++;
            }
        }

        if(ExtraEdges >= NumComponents - 1) return NumComponents - 1;
        return -1;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {3, 4}};
    int n = 5;
    cout << sol.Solve(n, edges) << endl; // Output the result
    return 0;
}
