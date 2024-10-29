// Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. Find whether element x is present
//  in the matrix or not. Return a boolean value true if x is present in the matrix and false if it is not present.



// // 1. TC = (N^2)

// class Solution {
//   public:
//     // Function to search a given number in row-column sorted matrix.
//     bool search(vector<vector<int> > &matrix, int n, int m, int x) {
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
//                 if(matrix[i][j] == x) return true;
//             }
//         }
//         return false;
//     }
// };


// 2. TC = O(n+m)

// class Solution {
//   public:
//     bool search(vector<vector<int>> &matrix, int n, int m, int x) {
//         int i = 0; // Start from the first row
//         int j = m - 1; // Start from the last column

//         while (i < n && j >= 0) {
//             if (matrix[i][j] == x) {
//                 return true; // Found the element
//             } else if (matrix[i][j] > x) {
//                 j--; // Move left
//             } else {
//                 i++; // Move down
//             }
//         }
        
//         return false; // Element not found
//     }
// };
