// Given a n * m matrix grid where each element can either be 0 or 1. You need to find the shortest distance between a given source cell 
// to a destination cell. The path can only be created out of a cell if its value is 1. 

// If the path is not possible between source cell and destination cell, then return -1.

// Note : You can move into an adjacent cell if that adjacent cell is filled with element 1. Two cells are adjacent if they share a side. 
// In other words, you can move in one of the four directions, Up, Down, Left and Right. The source and destination cell are based on the 
// zero based indexing. The destination cell should be 1.


    // int shortestPath(vector<vector<int>> &grid, pair<int, int> source, pair<int, int> destination) {
    //     int delrow[] = {-1, 0, 1, 0};
    //     int delcol[] = {0, -1, 0, 1};
        
    //     int n = grid.size();
    //     int m = grid[0].size();
        
    //     if (grid[source.first][source.second] == 0 || grid[destination.first][destination.second] == 0) {
    //         return -1;
    //     }
        
    //     vector<vector<int>> dist(n, vector<int>(m, 1000000));
        
    //     queue<pair<pair<int, int>, int>> q;
    //     q.push({{source.first, source.second}, 0});
    //     dist[source.first][source.second] = 0;
    
    //     while (!q.empty()) {
    //         int row = q.front().first.first;
    //         int col = q.front().first.second;
    //         int distance = q.front().second;
    //         q.pop();
            
    //         if (row == destination.first && col == destination.second) {
    //             return distance;
    //         }
            
    //         for (int i = 0; i < 4; i++) {
    //             int nrow = row + delrow[i];
    //             int ncol = col + delcol[i];
                
    //             if (nrow < n && nrow >= 0 && ncol < m && ncol >= 0 && grid[nrow][ncol] == 1) {
    //                 if (dist[nrow][ncol] > distance + 1) {
    //                     dist[nrow][ncol] = distance + 1;
    //                     q.push({{nrow, ncol}, dist[nrow][ncol]});
    //                 }
    //             }
    //         }
    //     }
        
    //     return -1;
    // }