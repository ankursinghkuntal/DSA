class Solution {
  public:
    int n, m;
    vector<int> dx = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> dy = {-1,  0,  1,-1, 1,-1, 0, 1};

    bool isFeasible(int nr, int nc) {
        return nr >= 0 && nr < n && nc >= 0 && nc < m;
    }

    bool checkDir(int row, int col, vector<vector<char>>&grid, string &word) {
        for (int dir = 0; dir < 8; dir++) {
            bool found = true;
            for (int i = 0; i < word.size(); i++) {
                int x = row + dx[dir] * i;
                int y = col + dy[dir] * i;

                if (!isFeasible(x, y) || grid[x][y] != word[i]) {
                    found = false;
                    break;
                }
            }
            if (found) return true;
        }
        return false; 
    }

    vector<vector<int>> searchWord(vector<vector<char>> &grid, string &word) {
        n = grid.size();
        m = grid[0].size();
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == word[0] && checkDir(i, j, grid, word)) {
                    ans.push_back({i, j});
                }
            }
        }
        return ans;
    }
};
