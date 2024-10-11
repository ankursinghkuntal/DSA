// You are a hiker preparing for an upcoming hike. You are given heights[][], a 2D array of size rows x columns, where heights[row][col]
//  represents the height of cell (row, col). You are situated in the top-left cell, (0, 0), and you hope to travel to the bottom-right 
//  cell, (rows-1, columns-1) (i.e., 0-indexed). You can move up, down, left, or right, and you wish to find the route with minimum effort.

// Note: A route's effort is the maximum absolute difference in heights between two consecutive cells of the route.




    // int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
    //     int delrow[] = {-1, 0, 1, 0};
    //     int delcol[] = {0, -1, 0, 1};
        
    //     priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        
    //     vector<vector<int>> maxEffort(rows, vector<int>(columns, 1000000));
    //     maxEffort[0][0] = 0;
    //     pq.push({0, {0, 0}});
        
    //     while (!pq.empty()) {
    //         int efforts = pq.top().first;
    //         int row = pq.top().second.first;
    //         int col = pq.top().second.second;
    //         pq.pop();
            
    //         if (row == rows - 1 && col == columns - 1) return efforts;
            
    //         for (int i = 0; i < 4; i++) {
    //             int nrow = row + delrow[i];
    //             int ncol = col + delcol[i];
                
    //             if (nrow >= 0 && nrow < rows && ncol >= 0 && ncol < columns) {
    //                 int currentEffort = max(efforts, abs(heights[row][col] - heights[nrow][ncol]));
    //                 if (currentEffort < maxEffort[nrow][ncol]) {
    //                     maxEffort[nrow][ncol] = currentEffort;
    //                     pq.push({currentEffort, {nrow, ncol}});
    //                 }
    //             }
    //         }
    //     }
    //     return -1;
    // }

