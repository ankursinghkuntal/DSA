// Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of '0's (Water) and '1's(Land). Find the number of islands.

// Note: An island is either surrounded by water or the boundary of a grid and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.



// class Solution {
//   public:
//     // Function to find the number of islands.
//     bool isValid(int nr, int nc, int n, int m){
//         return nr<n && nr>=0 && nc<m && nc>=0;
//     }
    
//     int bfs(int row, int col, vector<vector<int>>&vis, int n, int m, vector<vector<char>>& grid){
//         vis[row][col] = 1;
//         queue<pair<int,int>>q;
//         q.push({row,col});
        
//         int delRow[] = {-1,-1,-1,0,0,1,1,1};
//         int delCol[] = {-1,0,1,-1,1,-1,0,1};
        
//         while(!q.empty()){
//             int r = q.front().first;
//             int c = q.front().second;
//             q.pop();
//             for(int i = 0; i < 8; i++){
//                 int nr = r+delRow[i];
//                 int nc = c+delCol[i];
                
//                 if(isValid(nr, nc, n, m) && grid[nr][nc] == '1' && vis[nr][nc] == 0){
//                     vis[nr][nc] = 1;
//                     q.push({nr,nc});
//                 }
//             }
//         }
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         // Code here
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<int>>vis(n,vector<int>(m,0));
//         int cnt = 0;
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(vis[i][j] == 0 && grid[i][j] == '1'){
//                     bfs(i,j,vis, n, m, grid);
//                     cnt++;
//                 }
//             }
//         }
        
//         return cnt;
//     }
// };