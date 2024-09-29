
// An image is represented by a 2-D array of integers, each integer representing the pixel value of the image.

// Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.

// To perform a "flood fill", consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the 
// starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel), and so on. Replace the 
// color of all of the aforementioned pixels with the new color.



// void dfs(int sr, int sc, vector<vector<int>>& image, vector<vector<bool>>& vis, int newColor, int originalColor) {
//     vis[sr][sc] = true;
//     image[sr][sc] = newColor;
    
//     int n = image.size();
//     int m = image[0].size();
    
//     if (sr-1 >= 0 && !vis[sr-1][sc] && image[sr-1][sc] == originalColor) {
//         dfs(sr-1, sc, image, vis, newColor, originalColor);
//     }
    
//     if (sr+1 < n && !vis[sr+1][sc] && image[sr+1][sc] == originalColor) {
//         dfs(sr+1, sc, image, vis, newColor, originalColor);
//     }
    
//     if (sc-1 >= 0 && !vis[sr][sc-1] && image[sr][sc-1] == originalColor) {
//         dfs(sr, sc-1, image, vis, newColor, originalColor);
//     }
    
//     if (sc+1 < m && !vis[sr][sc+1] && image[sr][sc+1] == originalColor) {
//         dfs(sr, sc+1, image, vis, newColor, originalColor);
//     }
// }

// vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//     int n = image.size();
//     int m = image[0].size();
//     vector<vector<bool>> vis(n, vector<bool>(m, false));
//     int originalColor = image[sr][sc];
    
//     if (originalColor != newColor) {
//         dfs(sr, sc, image, vis, newColor, originalColor);
//     }
    
//     return image;
// }
