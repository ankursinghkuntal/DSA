// You are given a square binary grid. A grid is considered binary if every value in the grid is either 1 or 0. You can change at most one 
// cell in the grid from 0 to 1. You need to find the largest group of connected  1's. Two cells are said to be connected if both are adjacent
// (top, bottom, left, right) to each other and both have the same value.



#include <iostream>
#include <vector>
#include <set>
using namespace std;

class DisJoint {
public:
    vector<int> rank, parent, size;

    DisJoint(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);

        for (int i = 0; i <= n; i++) {
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
private:
    bool isValid(int nRow, int nCol, int n, int m) {
        return nRow >= 0 && nRow < n && nCol >= 0 && nCol < m;
    }

public:
    int MaxConnection(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        DisJoint ds(n * m);

        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, -1, 0, 1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) continue;
                for (int k = 0; k < 4; k++) {
                    int nRow = i + delRow[k];
                    int nCol = j + delCol[k];
                    if (isValid(nRow, nCol, n, m) && grid[nRow][nCol] == 1) {
                        int Node_Num = i * m + j;
                        int newNode_Num = nRow * m + nCol;
                        ds.UnionBySize(Node_Num, newNode_Num);
                    }
                }
            }
        }

        int mx = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) continue;

                set<int> components;

                for (int k = 0; k < 4; k++) {
                    int nRow = i + delRow[k];
                    int nCol = j + delCol[k];
                    if (isValid(nRow, nCol, n, m) && grid[nRow][nCol] == 1) {
                        components.insert(ds.findUltimateParent(nRow * m + nCol));
                    }
                }

                int totalSize = 0;
                for (auto it : components) {
                    totalSize += ds.size[it];
                }

                mx = max(mx, totalSize + 1);
            }
        }

        for (int cell = 0; cell < n * m; cell++) {
            mx = max(mx, ds.size[ds.findUltimateParent(cell)]);
        }

        return mx;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> grid = {{1, 0, 1, 0}, 
                                {1, 1, 0, 0}, 
                                {0, 0, 1, 1}, 
                                {0, 1, 1, 0}};
    
    int result = sol.MaxConnection(grid);
    cout << "Maximum connections: " << result << endl;

    return 0;
}
