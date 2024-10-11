// You are given a n,m which means the row and column of the 2D matrix and an array of  size k denoting the number of operations. 
// Matrix elements is 0 if there is water or 1 if there is land. Originally, the 2D matrix is all 0 which means there is no land in 
// the matrix. The array has k operator(s) and each operator has two integer A[i][0], A[i][1] means that you can change the cell 
// matrix[A[i][0]][A[i][1]] from sea to island. Return how many island are there in the matrix after each operation.You need to 
// return an array of size k.
// Note : An island means group of 1s such that they share a common side.





#include <bits/stdc++.h>
using namespace std;

class DisJoint {
    vector<int> rank, parent, size;

public:
    DisJoint(int n) {
        rank.resize(n+1, 0);
        parent.resize(n+1);
        size.resize(n+1, 1);

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
  public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        DisJoint ds(n * m);
        int vis[n][m];
        memset(vis, 0, sizeof(vis));
        
        vector<int> ans;
        int cnt = 0;
        
        for (int i = 0; i < operators.size(); i++) {
            int row = operators[i][0];
            int col = operators[i][1];
            if (vis[row][col] == 1) {
                ans.push_back(cnt);
                continue;
            }
            vis[row][col] = 1;
            cnt++;
            
            // Check all four directions
            int delRow[] = {-1, 0, 1, 0};
            int delCol[] = {0, -1, 0, 1};
            
            for (int j = 0; j < 4; j++) {
                int adjRow = row + delRow[j];
                int adjCol = col + delCol[j];
                if (adjCol >= 0 && adjCol < m && adjRow >= 0 && adjRow < n) {
                    if (vis[adjRow][adjCol] == 1) {
                        int Node_Num = row * m + col;
                        int adjNode_Num = adjRow * m + adjCol;
                        if (ds.findUltimateParent(Node_Num) != ds.findUltimateParent(adjNode_Num)) {
                            cnt--;
                            ds.UnionBySize(Node_Num, adjNode_Num);
                        }
                    }
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};

// Main function to test the solution
int main() {
    Solution sol;

    // Input values
    int n = 3, m = 3; // Grid size
    vector<vector<int>> operators = {{0, 0}, {0, 1}, {1, 2}, {2, 1}, {1, 1}};

    // Get the result
    vector<int> result = sol.numOfIslands(n, m, operators);

    // Output the results
    for (int count : result) {
        cout << count << " ";
    }
    cout << endl;

    return 0;
}


 