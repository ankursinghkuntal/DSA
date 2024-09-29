    // void bfs(int r, int c, vector<vector<bool>>& vis, vector<vector<char>>& grid) {
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     vis[r][c] = true;
    //     queue<pair<int, int>> q;
    //     q.push({r, c});
        
    //     int drow[] = {-1, 0, 1, 0, -1, -1, 1, 1};
    //     int dcol[] = {0, 1, 0, -1, -1, 1, -1, 1};
    
    //     while (!q.empty()) {
    //         int row = q.front().first;
    //         int col = q.front().second;
    //         q.pop();
    
    //         for (int i = 0; i < 8; i++) {
    //             int nrow = row + drow[i];
    //             int ncol = col + dcol[i];
    //             if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
    //                 vis[nrow][ncol] = true;
    //                 q.push({nrow, ncol});
    //             }
    //         }
    //     }
    // }
    
    // int numIslands(vector<vector<char>>& grid) {
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     int cnt = 0;
    //     vector<vector<bool>> vis(n, vector<bool>(m, false));
        
    //     for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < m; j++) {
    //             if (!vis[i][j] && grid[i][j] == '1') {
    //                 bfs(i, j, vis, grid);
    //                 cnt++;
    //             }
    //         }
    //     }
    //     return cnt;
    // }