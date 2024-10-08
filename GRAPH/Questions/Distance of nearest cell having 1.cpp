// Given a binary grid of n*m. Find the distance of the nearest 1 in the grid for each cell.
// The distance is calculated as |i1  - i2| + |j1 - j2|, where i1, j1 are the row number and column number of the current cell, 
// and i2, j2 are the row number and column number of the nearest cell having value 1. 
// There should be atleast one 1 in the grid.



    // vector<vector<int>> nearest(vector<vector<int>>& grid) {
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     vector<vector<int>> newgrid(n, vector<int>(m, 0));
    //     vector<vector<bool>> vis(n, vector<bool>(m, false));
    //     queue<pair<pair<int,int>,int>>q;
    //     for(int i = 0; i < n; i++){
    //         for(int j = 0; j < m; j++){
    //             if(grid[i][j] == 1){
    //                 q.push({{i,j},0});
    //                 vis[i][j] = true;
    //             }
    //         }
    //     }
        
    //     int drow[] = {-1, 0, 1, 0};
    //     int dcol[] = {0, -1, 0, 1};
        
    //     while(!q.empty()){
    //         int row = q.front().first.first;
    //         int col = q.front().first.second;
    //         int dist = q.front().second;
    //         q.pop();
            
    //         newgrid[row][col] = dist;
    //         for(int i = 0; i < 4; i++){
    //             int nrow = row+drow[i];
    //             int ncol = col+dcol[i];
    //             if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol]){
    //                 vis[nrow][ncol] = true;
    //                 q.push({{nrow,ncol},dist+1});
    //             }
    //         }
    //     }
    //     return newgrid;
    // }