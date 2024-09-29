// You are given an n x m binary matrix grid, where 0 represents a sea cell and 1 represents a land cell.

// A move consists of walking from one land cell to another adjacent (4-directionally) land cell or walking off the boundary of the grid.

// Find the number of land cells in grid for which we cannot walk off the boundary of the grid in any number of moves.



    // int numberOfEnclaves(vector<vector<int>> &grid) {
        
    //     int n = grid.size();
    //     int m = grid[0].size();
        
    //     vector<vector<bool>>vis(n,vector<bool>(m,false));
    //     queue<pair<int,int>>q;
        
    //     for(int j = 0; j < m; j++){
    //         if(grid[0][j] == 1){
    //             vis[0][j] = true;
    //             q.push({0,j});
    //         }
            
    //         if(grid[n-1][j] == 1){
    //             vis[n-1][j] = true;
    //             q.push({n-1,j});
    //         }
    //     }
        
    //     for(int i = 0; i < n; i++){
    //         if(grid[i][0] == 1){
    //             vis[i][0] = true;
    //             q.push({i,0});
    //         }
            
    //         if(grid[i][m-1] == 1){
    //             vis[i][m-1] = true;
    //             q.push({i,m-1});
    //         }
    //     }
        
    //     int drow[] = {-1,0,1,0};
    //     int dcol[] = {0,-1,0,1};
        
    //     while(!q.empty()){
    //         int row = q.front().first;
    //         int col = q.front().second;
    //         q.pop();
            
    //         for(int i = 0; i < 4; i++){
    //             int nrow = row+drow[i];
    //             int ncol = col+dcol[i];
    //             if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol] == 1){
    //                 vis[nrow][ncol] = true;
    //                 q.push({nrow,ncol});
    //             }
    //         }
    //     }
        
    //     int cnt = 0;
    //     for(int i = 0; i < n; i++){
    //         for(int j = 0; j < m; j++){
    //             if(grid[i][j] == 1 && !vis[i][j] ) cnt++;
    //         }
    //     }
        
    //     return cnt;
    // }