// Given a grid of dimension nxm where each cell in the grid can have values 0, 1 or 2 which has the following meaning:
// 0 : Empty cell
// 1 : Cells have fresh oranges
// 2 : Cells have rotten oranges

// We have to determine what is the earliest time after which all the oranges are rotten. A rotten orange at index [i,j] 
// can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. 


// here BFS is used because here we will have to proceed levelwise to calculate minimum time 

// int orangesRotting(vector<vector<int>>& grid) {
//     int n = grid.size();
//     int m = grid[0].size();
//     int freshOranges = 0;
    
//     queue<pair<pair<int,int>,int>> q;
    
//     // Use vector<vector<bool>> to track visited cells
//     vector<vector<bool>> vis(n, vector<bool>(m, false));
    
//     // Count fresh oranges and add rotten oranges to the queue
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (grid[i][j] == 1) freshOranges++;
//             if (grid[i][j] == 2) q.push({{i, j}, 0});
//         }
//     }
    
//     int tm = 0;
//     int drow[] = {-1, 0, +1, 0};
//     int dcol[] = {0, +1, 0, -1};
    
//     // BFS to spread rotting to adjacent fresh oranges
//     while (!q.empty()) {
//         int r = q.front().first.first;
//         int c = q.front().first.second;
//         int t = q.front().second;
        
//         vis[r][c] = true;  // Mark the current cell as visited
//         q.pop();
//         tm = max(t, tm);  // Update the time to the maximum found so far
        
//         for (int i = 0; i < 4; i++) {
//             int nrow = r + drow[i];
//             int ncol = c + dcol[i];
//             // Check if the new position is within bounds, unvisited, and a fresh orange
//             if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] == 1) {
//                 vis[nrow][ncol] = true;
//                 freshOranges--;  // Reduce the count of fresh oranges
//                 q.push({{nrow, ncol}, t + 1});  // Add the newly rotten orange to the queue
//             }
//         }
//     }
    
//     // If there are still fresh oranges left, return -1; otherwise, return the time taken
//     return freshOranges == 0 ? tm : -1;
// }









// class Solution {
//   public:
//     // Function to find minimum time required to rot all oranges.
    
//     bool isValid(int nr, int nc, int n, int m){
//         return nr >= 0 && nr < n && nc >= 0 && nc < m;
//     }
    
//     int orangesRotting(vector<vector<int>>& mat) {
        
//         int n = mat.size();
//         int m = mat[0].size();
        
//         vector<vector<int>>rot_time(n, vector<int>(m,-1));
        
//         queue<pair<int,int>>q;
        
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(mat[i][j] == 2){
//                     q.push({i,j});
//                     rot_time[i][j] = 0;
//                 }
//             }
//         }
        
//         vector<int>delRow = {-1,0,0,1};
//         vector<int>delCol = {0,-1,1,0};
        
//         while(!q.empty()){
//             int row = q.front().first;
//             int col = q.front().second;
//             q.pop();
            
//             for(int i = 0; i < 4; i++){
//                 int nr = row + delRow[i];
//                 int nc = col + delCol[i];
                
//                 if(isValid(nr,nc,n,m) && mat[nr][nc] == 1){
//                      if(rot_time[nr][nc] == -1 || rot_time[nr][nc] >= rot_time[row][col]+1){
//                          rot_time[nr][nc] = rot_time[row][col]+1;
//                          q.push({nr,nc});
//                      }
//                 }
                
//             }
            
//         }
        
//        int maxTime = 0;
        
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(mat[i][j] == 1 && rot_time[i][j] == -1) return -1;
//                 else if(rot_time[i][j] != -1) maxTime = max(maxTime,rot_time[i][j]);
//             }
//         }
        
//         return maxTime;
//     }
// };